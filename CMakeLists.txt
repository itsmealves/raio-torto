cmake_minimum_required(VERSION 3.10)
project(raio_torto)

set(CMAKE_CXX_STANDARD 11)

add_executable(raio_torto main.cpp thing/Thing.cpp thing/Thing.h engine/Ray.cpp engine/Ray.h engine/World.cpp engine/World.h engine/Renderer.cpp engine/Renderer.h math/Vector.cpp math/Vector.h thing/Sphere.cpp thing/Sphere.h)