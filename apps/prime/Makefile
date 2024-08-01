CXX = g++
CXXFLAGS = -std=c++14 -Wall -Wextra

TARGET = prime
SRCS = main.cpp
HEADERS = prime.h

all: $(TARGET)

$(TARGET): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean