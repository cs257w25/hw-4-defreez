cmake_minimum_required(VERSION 3.10)

project(wordle)
# Specify the C++ standard

set(CMAKE_CXX_STANDARD 17)

# Add the executable (name and source files)
add_executable(wordle src/main.cpp src/game.cpp)