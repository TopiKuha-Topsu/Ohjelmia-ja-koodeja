cmake_minimum_required(VERSION 3.16)

project(viikkotehtava_4_olioohjelmointi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikkotehtava_4_olioohjelmointi main.cpp
    pankkitili.h pankkitili.cpp
    luottotili.h luottotili.cpp
    asiakas.h asiakas.cpp)

include(GNUInstallDirs)
install(TARGETS viikkotehtava_4_olioohjelmointi
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
