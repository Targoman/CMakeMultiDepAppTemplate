cmake_minimum_required(VERSION 3.16)
project(CMakeBuildSampleLib VERSION 0.0.1)

include(./Targoman.cmake)
setup_bs_paths()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(COMPILE_OPTIONAL_TEST "Compile optional blackbox test set" FALSE)
option(COMPILE_EXAMPLES "Compile examples" FALSE)

find_package(Qt5 COMPONENTS Core Test REQUIRED)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_subdirectory(3rdParty)

add_executable(sampleMultiDepApp
    src/main.cpp
)
target_link_libraries(sampleMultiDepApp SampleLibrary)
target_link_libraries(sampleMultiDepApp DummyLib1)
target_link_libraries(sampleMultiDepApp DummyLib2)