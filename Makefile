# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Target executable name
TARGET = hello

# Default target — runs when you just type `make`
all: $(TARGET)

# How to build the executable from the .cpp file
$(TARGET): hello.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) hello.cpp

# Clean up build artifacts
clean:
	rm -f $(TARGET)
