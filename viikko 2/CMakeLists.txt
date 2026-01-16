cmake_minimum_required(VERSION 3.16)

project(untitled9 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(untitled9 main.cpp
    game.h game.cpp)

include(GNUInstallDirs)
install(TARGETS untitled9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
