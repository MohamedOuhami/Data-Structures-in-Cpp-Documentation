cmake_minimum_required(VERSION 3.16)

project(learning_sets LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(learning_sets main.cpp)

include(GNUInstallDirs)
install(TARGETS learning_sets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
