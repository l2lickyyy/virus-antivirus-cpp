cmake_minimum_required(VERSION 3.10)
project(virus_antivirus_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(malware_antivirus ${SOURCES} "src/malware/FileInfector.h"
											"src/malware/Worm.h")