cmake_minimum_required(VERSION 3.28)
project(cpp_dsa)

set(CMAKE_CXX_STANDARD 26)

file(GLOB source_files strings/*.cpp)

foreach(source_file ${source_files})
    get_filename_component(executable_name ${source_file} NAME_WE)
    add_executable(${executable_name} ${source_file}
            strings/score_of_string.cpp
    )
endforeach()