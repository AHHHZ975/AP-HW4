CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = main.o Shape.o TwoDimensionalShape.o ThreeDimensionalShape.o sphere.o circle.o square.o cube.o
TARGET = main 


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
Shape.o: Shape.cpp Shape.h
	$(CXX) $(CXXFLAGS) Shape.cpp
TwoDimensionalShape.o: TwoDimensionalShape.cpp TwoDimensionalShape.h
	$(CXX) $(CXXFLAGS) TwoDimensionalShape.cpp
ThreeDimensionalShape.o: ThreeDimensionalShape.cpp ThreeDimensionalShape.h
	$(CXX) $(CXXFLAGS) ThreeDimensionalShape.cpp
sphere.o: sphere.cpp sphere.h
	$(CXX) $(CXXFLAGS) sphere.cpp
circle.o: circle.cpp circle.h
	$(CXX) $(CXXFLAGS) circle.cpp
square.o: square.cpp square.h
	$(CXX) $(CXXFLAGS) square.cpp
cube.o: cube.cpp cube.h
	$(CXX) $(CXXFLAGS) cube.cpp

clean:
	rm -f $(TARGET) $(OBJECTS)
