cmake_minimum_required(VERSION 3.29)
project(LOG2400_TP4)

set(CMAKE_CXX_STANDARD 14)

include_directories(MiniDesign)

add_executable(LOG2400_TP4
        MiniDesign/MiniDesign.cpp
        MiniDesign/Display/Display.hpp
        MiniDesign/Display/DisplayID.cpp
        MiniDesign/Display/DisplayID.hpp
        MiniDesign/Display/DisplayTexture.cpp
        MiniDesign/Display/DisplayTexture.hpp
        MiniDesign/BuildEdges/BuildEdges.cpp
        MiniDesign/BuildEdges/BuildEdges.hpp
        MiniDesign/Display/Display.cpp
        MiniDesign/affichage.cpp
        MiniDesign/affichage.hpp)
