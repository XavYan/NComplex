CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++17 -g

EXEC = complex

all: $(EXEC)

$(EXEC): main.cpp NComplex.o
	$(CXX) $(CXXFLAGS) -o $(EXEC) main.cpp NComplex.o

NComplex.o: NComplex.h NComplex.cpp
	$(CXX) $(CXXFLAGS) -c -o NComplex.o NComplex.cpp

.PHONY: clean

clean:
	rm -rf *.o $(EXEC)