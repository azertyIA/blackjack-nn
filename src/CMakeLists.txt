add_library(nn mat.cpp nn.cpp)
add_library(blackjack blackjack.cpp)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE blackjack nn)

set_target_properties(main PROPERTIES CXX_STANDARD 17
                                      CMAKE_CXX_STANDARD_REQUIRED ON)
