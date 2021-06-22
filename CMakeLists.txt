cmake_minimum_required(VERSION 3.19)
project(tmp)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        tmp
        main.cpp
        AbstractNode.h AbstractNode.cpp
        AbstractVisitor.h AbstractVisitor.cpp
        NodeVisitor.h NodeVisitor.cpp
        Nodes.h Nodes.cpp
        Visitor.cpp Visitor.h)