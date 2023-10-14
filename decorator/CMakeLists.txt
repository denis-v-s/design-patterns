cmake_minimum_required(VERSION 3.12)

project(decoratorPatternExample)

set(CMAKE_CXX_STANDARD 17)

# Locate and include header files
include_directories(include)

# Add source files
set(SOURCES
    src/Espresso.cpp
    src/HouseBlend.cpp
    src/Mocha.cpp
    src/Soy.cpp
    src/Whip.cpp
    src/App.cpp
)

# Create an executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Enable C++ features
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

# Add the include directory
target_include_directories(${PROJECT_NAME} PRIVATE include)
