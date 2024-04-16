cmake_minimum_required(VERSION 3.14)
project(gtest_issue)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_OSX_DEPLOYMENT_TARGET "12.0" CACHE STRING "Minimum macOS deployment version")

include(FetchContent)
FetchContent_Declare(
    googletest
    # URL https://github.com/google/googletest/archive/5197b1a8e6a1ef9f214f4aa537b0be17cbf91946.zip # latest commit
    URL https://github.com/google/googletest/archive/f8d7d77c06936315286eb55f8de22cd23c188571.zip # 1.14 release
    )

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(gtest_issue macostest.cpp)
target_link_libraries(gtest_issue gtest_main)

include(GoogleTest)
gtest_discover_tests(gtest_issue)
