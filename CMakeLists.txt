cmake_minimum_required(VERSION 3.5)

project (RegistroCmake)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/menu.cpp
    src/main.cpp
)

# Add an executable with the above sources
add_executable(RegistroCmake ${SOURCES})