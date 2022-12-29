cmake_minimum_required(VERSION 3.24)
project(Store_Electronics)

set(CMAKE_CXX_STANDARD 20)

add_executable(Store_Electronics main.cpp ielectronics.cpp ielectronics.h device.cpp device.h player.cpp player.h smartPhone.cpp smartPhone.h photoaparat.cpp photoaparat.h telephone.cpp telephone.h)
