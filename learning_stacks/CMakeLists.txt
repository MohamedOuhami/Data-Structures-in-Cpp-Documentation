cmake_minimum_required(VERSION 3.16)

project(learning_stacks LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(learning_stacks main.cpp)

include(GNUInstallDirs)
install(TARGETS learning_stacks
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
