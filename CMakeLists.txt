# Define CMake parameter
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT (MTLib)

# Include source folder
ADD_SUBDIRECTORY(include)
ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(src/vector)
ADD_SUBDIRECTORY(src/matrix)
ADD_SUBDIRECTORY(src/optimization)
ADD_SUBDIRECTORY(example)


# Include document folder
ADD_SUBDIRECTORY(doc)

# SRC LIST and ADD EXECUTABLE
SET(SRC_LIST main.cpp)
ADD_EXECUTABLE(MTLib)
