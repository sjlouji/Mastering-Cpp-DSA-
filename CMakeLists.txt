cmake_minimum_required(VERSION 3.28)
project(cpp_dsa)

set(CMAKE_CXX_STANDARD 26)

add_executable(cpp_dsa
        strings/fiz_buzz.cpp
        strings/digit_count.cpp
        strings/maximum_value_string.cpp
        strings/shortest_to_char.cpp
        strings/check_a_string.cpp
        strings/find_words.cpp
        strings/find_word_charecters.cpp)
