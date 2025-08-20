cmake_minimum_required(VERSION 4.0)
project(Casino_Number_Guessing_Game)

set(CMAKE_CXX_STANDARD 17)

add_executable(Casino_Number_Guessing_Game main.cpp
        CasinoGame.cpp
        CasinoGame.h)
