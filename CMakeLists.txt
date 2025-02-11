cmake_minimum_required(VERSION 3.10)

project(wordle)
# Specify the C++ standard

set(CMAKE_CXX_STANDARD 17)

# Add the executable (name and source files)
add_executable(wordle src/main.cpp src/game.cpp)
target_include_directories(wordle PRIVATE src)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

# This is the line that says which source files
# are used to build the executable "test"
add_executable(test tests/test_game.cpp src/game.cpp)

target_link_libraries(test PRIVATE Catch2::Catch2WithMain)
target_include_directories(test PRIVATE src)