cmake_minimum_required(VERSION 3.20)

MACRO(subdirlist result curdir)
	FILE(GLOB children RELATIVE ${curdir} ${curdir}/*)
	SET(dirlist "")
	FOREACH(child ${children})
		IF(IS_DIRECTORY ${curdir}/${child})
			LIST(APPEND dirlist ${child})
		ENDIF()
	ENDFOREACH()
	SET(${result} ${dirlist})
ENDMACRO()

find_package(Vulkan REQUIRED)

file(GLOB H_ROOT_HEADERS ./include/dragon/*.h)
file(GLOB HPP_ROOT_HEADERS ./include/dragon/*.hpp)

file(GLOB_RECURSE H_AUDIO_HEADERS ./include/dragon/audio/*.h)
file(GLOB_RECURSE HPP_AUDIO_HEADERS ./include/dragon/audio/*.hpp)

file(GLOB_RECURSE H_COMPUTE_HEADERS ./include/dragon/compute/*.h)
file(GLOB_RECURSE HPP_COMPUTE_HEADERS ./include/dragon/compute/*.hpp)

file(GLOB_RECURSE H_GRAPHICS_HEADERS ./include/dragon/graphics/*.h)
file(GLOB_RECURSE HPP_GRAPHICS_HEADERS ./include/dragon/graphics/*.hpp)

file(GLOB_RECURSE H_PHYSICS_HEADERS ./include/dragon/physics/*.h)
file(GLOB_RECURSE HPP_PHYSICS_HEADERS ./include/dragon/physics/*.hpp)

list(APPEND H_HEADERS ${H_ROOT_HEADERS} ${H_AUDIO_HEADERS} ${H_COMPUTE_HEADERS} ${H_GRAPHICS_HEADERS} ${H_PHYSICS_HEADERS})
list(APPEND HPP_HEADERS ${HPP_ROOT_HEADERS} ${HPP_AUDIO_HEADERS} ${HPP_COMPUTE_HEADERS} ${HPP_GRAPHICS_HEADERS} ${HPP_PHYSICS_HEADERS})

list(APPEND HEADERS ${H_HEADERS} ${HPP_HEADERS})

add_subdirectory(boost)
set(BUILD_SHARED_LIBS ON)
add_subdirectory(glfw)
set(BUILD_STATIC_LIBS ON)
add_subdirectory(glm)
set(BUILD_SHARED_LIBS OFF)

subdirlist(BOOST_SUBDIRS ./boost)
subdirlist(GLFW_SUBDIRS ./glfw)

list(APPEND Dragon_INCLUDE_DIRS
	include
	glm
	${BOOST_SUBDIRS}
	${GLFW_SUBDIRS}
	${Vulkan_INCLUDE_DIRS}
)

add_library(Dragon-Headers INTERFACE ${HEADERS})

target_link_libraries(Dragon-Headers INTERFACE Boost)
target_link_libraries(Dragon-Headers INTERFACE GLFW)

add_library(Dragon::Headers ALIAS Dragon-Headers)