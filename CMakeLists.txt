cmake_minimum_required(VERSION 3.26)
project(DBScan C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(DBScan
        DBScan.c
        kdtree.c
        KDTree.h
        list.h
        main.c
        point.c
        point.h
        PointList.c
        PointList.h
        test.c)
