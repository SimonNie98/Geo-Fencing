cmake_minimum_required(VERSION 3.12)
project(16307130133_2)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_BUILD_TYPE "Release")

SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O2")


include_directories(RTree-master)
include_directories(yourcode)

add_executable(main
        yourcode/JudgePoint.cpp
        yourcode/JudgePoint.h
        yourcode/KDTree.cpp
        yourcode/KDTree.h
        yourcode/Rectangle.cpp
        yourcode/Rectangle.h
        yourcode/RTree.h
        yourcode/submit-1AddPolygonBeforeQueryPoint.cpp
        yourcode/submit-1AddPolygonBeforeQueryPoint.h
        yourcode/submit-2AddPointBeforeQueryPolygon.cpp
        yourcode/submit-2AddPointBeforeQueryPolygon.h
        yourcode/submit-3AddBeforeQuery.cpp
        yourcode/submit-3AddBeforeQuery.h
        yourcode/submit-4MixQueryPoint.cpp
        yourcode/submit-4MixQueryPoint.h
        yourcode/submit-5MixQueryPolygon.cpp
        yourcode/submit-5MixQueryPolygon.h
        yourcode/submit-6MixQuery.cpp
        yourcode/submit-6MixQuery.h
        main.cpp)
