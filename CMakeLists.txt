cmake_minimum_required(VERSION 3.29)
project(LOG2400_TP4)

set(CMAKE_CXX_STANDARD 20)

include_directories(MiniDesign)

add_executable(LOG2400_TP4
        MiniDesign/MiniDesign.cpp
        MiniDesign/affichage.cpp
        MiniDesign/affichage.hpp
        MiniDesign/Component/Component.hpp
        MiniDesign/Component/Component.cpp
        MiniDesign/Component/ScatterGraph.cpp
        MiniDesign/Component/ScatterGraph.hpp
        MiniDesign/Component/Point.cpp
        MiniDesign/Component/Point.hpp
        MiniDesign/Display/Display.cpp
        MiniDesign/Display/Display.hpp
        MiniDesign/Display/DisplayID.cpp
        MiniDesign/Display/DisplayID.hpp
        MiniDesign/Display/DisplayTexture.cpp
        MiniDesign/Display/DisplayTexture.hpp
        MiniDesign/EdgeBuilder/EdgeBuilder.cpp
        MiniDesign/EdgeBuilder/EdgeBuilder.hpp
        MiniDesign/EdgeBuilder/EdgeBuilderDistance.cpp
        MiniDesign/EdgeBuilder/EdgeBuilderDistance.hpp
        MiniDesign/EdgeBuilder/EdgeBuilderID.cpp
        MiniDesign/EdgeBuilder/EdgeBuilderID.hpp
        MiniDesign/Math/Position.hpp
        MiniDesign/Math/Position.cpp
        MiniDesign/Utils/Grid.hpp
        MiniDesign/Utils/ComponentList.hpp)
