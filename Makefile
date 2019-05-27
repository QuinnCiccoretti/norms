#qjc5fb Quinn Ciccoretti Lab Section: 8am Tues
CXXFLAGS=-Wall -O2 -std=c++11
OFILES= main.o Point.o
CXX=clang++ $(CXXFLAGS)
DEBUG=-Wall -g
.SUFFIXES: .o .cpp
bst: $(OFILES)
	$(CXX) $(DEBUG) $(OFILES)
clean:
	-rm -f *.o *~ a.out
main.o: main.cpp Point.h
Point.o: Point.cpp Point.h