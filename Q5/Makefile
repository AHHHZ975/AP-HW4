CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = main.o stack.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
stack.o: stack.cpp stack.h
	$(CXX) $(CXXFLAGS) stack.cpp

clean:
	rm -f $(TARGET) $(OBJECTS)
