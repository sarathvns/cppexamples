CXX = g++
CXXFLAGS = -std=c++14 -Wall -Wextra

TARGET = sumofnumbers
SRCS = main.cpp
HEADERS = sum_vector.h

all: $(TARGET)

$(TARGET): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean