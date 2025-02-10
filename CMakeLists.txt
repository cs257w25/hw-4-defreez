cmake_minimum_required(VERSION 3.10)

project(wordle)
# Specify the C++ standard

set(CMAKE_CXX_STANDARD 17)

# Add the executable (name and source files)
add_executable(wordle src/main.cpp src/game.cpp)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(test tests/test_game.cpp)
target_link_libraries(test PRIVATE Catch2::Catch2WithMain)