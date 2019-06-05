cmake_minimum_required(VERSION 3.14)

find_package(JiskefetApiCpp REQUIRED)

add_executable(
        Example.exe
        src/Example.cpp)

target_include_directories(
        Example.exe
        PUBLIC
        JiskefetApiCpp)

target_link_libraries(
        Example.exe
        JiskefetApiCpp)

