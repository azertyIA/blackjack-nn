add_library(mat mat.cpp)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE mat)

set_target_properties(main PROPERTIES CXX_STANDARD 17
                                      CMAKE_CXX_STANDARD_REQUIRED ON)
