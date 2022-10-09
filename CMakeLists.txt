cmake_minimum_required(VERSION 3.24)

set(H_ROOT_HEADERS )
set(HPP_ROOT_HEADERS include/dragon/dg_backend.hpp include/dragon/dgEngine.hpp include/dragon/dragon.hpp include/dragon/init.hpp)

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

set(BUILD_SHARED_LIBS OFF)
add_subdirectory(glfw)
add_subdirectory(glm)
set(BUILD_SHARED_LIBS ON)
add_subdirectory(openal)

add_library(Dragon-Headers INTERFACE ${HEADERS})
target_include_directories(Dragon-Headers INTERFACE ${Dragon_INCLUDE_DIRS})
target_link_libraries(Dragon-Headers INTERFACE ${Dragon_LINK_LIBRARIES} ${Dragon_LINK_INTERFACES})

add_library(Dragon::Headers ALIAS Dragon-Headers)
list(APPEND Dragon_LINK_INTERFACES Dragon::Headers)