cmake_minimum_required(VERSION 3.16)
project(binary-tree)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Wall -Wextra -Wpedantic) #-Werror

add_executable(
        binary-tree
        main.cpp
        AbstractNode.h AbstractNode.cpp
        AbstractVisitor.h
        NodeVisitor.h NodeVisitor.cpp
        Nodes.h Nodes.cpp
        Visitor.cpp Visitor.h)