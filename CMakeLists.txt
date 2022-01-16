cmake_minimum_required(VERSION 3.17)
project(Adapter)

set(CMAKE_CXX_STANDARD 20)
include_directories(GasTank TankAdaptee TankAdapter)

add_executable(Adapter main.cpp GasTank/GasTank.cpp GasTank/GasTank.h TankAdaptee/TankAdaptee.cpp TankAdaptee/TankAdaptee.h TankAdapter/TankAdapter.cpp TankAdapter/TankAdapter.h)