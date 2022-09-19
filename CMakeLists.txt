cmake_minimum_required(VERSION 3.20)

find_package(Vulkan REQUIRED)

file(GLOB_RECURSE HEADERS ./*.hpp)

add_subdirectory(boost)
set(BUILD_SHARED_LIBS ON)
add_subdirectory(glfw)
set(BUILD_STATIC_LIBS ON)
add_subdirectory(glm)
set(BUILD_SHARED_LIBS OFF)

add_library(Dragon-Headers INTERFACE ${HEADERS})

target_link_libraries(Dragon-Headers INTERFACE Boost)
target_link_libraries(Dragon-Headers INTERFACE GLFW)