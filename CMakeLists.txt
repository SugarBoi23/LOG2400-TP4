cmake_minimum_required(VERSION 3.29)
project(LOG2400_TP4)

set(CMAKE_CXX_STANDARD 14)

include_directories(MiniDesign)

add_executable(LOG2400_TP4
        MiniDesign/affichage.cpp
        MiniDesign/affichage.h
        MiniDesign/MiniDesign.cpp)
