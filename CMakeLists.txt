cmake_minimum_required(VERSION 3.24)
project(Store_Electronics)

set(CMAKE_CXX_STANDARD 17)

add_executable(Store_Electronics main.cpp ielectronics.cpp ielectronics.h device.cpp device.h player.cpp player.h photoaparat.cpp photoaparat.h telephone.cpp telephone.h smartPhone.cpp smartPhone.h)
