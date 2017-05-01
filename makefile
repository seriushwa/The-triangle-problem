CC = g++
CFLAGS = -fprofile-arcs -ftest-coverage  
LNK = -lgtest

all: DecisionTableTest BoundaryTest EquivalenceTest 
DecisionTableTest: DecisionTableTest.cpp triangle.o
	$(CC) -o DecisionTableTest $(CFLAGS) $(LNK) DecisionTableTest.cpp triangle.o
BoundaryTest: BoundaryTest.cpp triangle.o
	$(CC) -o BoundaryTest $(CFLAGS) $(LNK) BoundaryTest.cpp triangle.o
EquivalenceTest: EquivalenceTest.cpp triangle.o
	$(CC) -o EquivalenceTest $(CFLAGS) $(LNK) EquivalenceTest.cpp triangle.o
triangle.o: triangle.h triangle.cpp
	$(CC) -c -o triangle.o $(CFLAGS) triangle.cpp

