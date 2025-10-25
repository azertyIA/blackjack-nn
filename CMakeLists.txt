cmake_minimum_required(VERSION 3.21)
project(BlackJackNN LANGUAGES CXX)

# Export compile_commands.json for clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories("${CMAKE_SOURCE_DIR}/src/include")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_subdirectory(src)
add_subdirectory(tests)

enable_testing()
