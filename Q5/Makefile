CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = main.o Stack.o CText.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main.o: main.cpp Stack.h CText.h
	$(CXX) $(CXXFLAGS) main.cpp
Stack.o: Stack.cpp Stack.h
	$(CXX) $(CXXFLAGS) Stack.cpp
CText.o: CText.cpp CText.h
	$(CXX) $(CXXFLAGS) CText.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
