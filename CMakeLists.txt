cmake_minimum_required(VERSION 3.20)

set(BUILD_SHARED_LIBS OFF)
add_subdirectory(glfw)
add_subdirectory(glm)
set(BUILD_SHARED_LIBS ON)
add_subdirectory(openal)
add_subdirectory(openxr)