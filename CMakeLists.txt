cmake_minimum_required(VERSION 4.2)

project(
        Learn_CPP_by_Example
        VERSION 1.0.0
        LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(DisplayVars)
include(fetch3Libs)

display_vars()
fetch3Libs()

# dependencies
find_package(fmt REQUIRED)
find_package(spdlog REQUIRED)

add_subdirectory(ch01)
