cmake_minimum_required(VERSION 3.17)
project(quantum_compute)

set(Q_AGILE "quantum_compute")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_CXX_EXTENSIONS off)

add_subdirectory("${CMAKE_SOURCE_DIR}/vendor/eigen")
add_subdirectory("${CMAKE_SOURCE_DIR}/unit_tests/"  "${CMAKE_SOURCE_DIR}/vendor/qpp")

file(GLOB_RECURSE "REC_SRC" "${CMAKE_SOURCE_DIR}/src/*.cpp")

add_executable("${Q_AGILE}" "${REC_SRC}")

target_include_directories("${Q_AGILE}" PRIVATE
        "${CMAKE_SOURCE_DIR}/include/"
        "${CMAKE_SOURCE_DIR}/vendor/qpp/include/"
        "${CMAKE_SOURCE_DIR}/vendor/eigen/")
