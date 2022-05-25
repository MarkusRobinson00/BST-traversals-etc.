all: BSTtest BSTtest2 BSTtestCL BSTtestCD BSTtestDD 

BSTtest.o: BSTtest.cpp BinarySearchTree.h
	g++ -Wall -o BSTtest.o -c BSTtest.cpp
	
BSTtest: BSTtest.o
	g++ -Wall -o BSTtest BSTtest.o

BSTtest2.o: BSTtest2.cpp BinarySearchTree.h
	g++ -Wall -o BSTtest2.o -c BSTtest2.cpp

BSTtest2: BSTtest2.o
	g++ -Wall -o BSTtest2 BSTtest2.o
	
BSTtestCL.o: BSTtestCL.cpp BinarySearchTree.h
	g++ -Wall -o BSTtestCL.o -c BSTtestCL.cpp
	
BSTtestCL: BSTtestCL.o
	g++ -Wall -o BSTtestCL BSTtestCL.o

BSTtestCD.o: BSTtestCD.cpp BinarySearchTree.h
	g++ -Wall -o BSTtestCD.o -c BSTtestCD.cpp
	
BSTtestCD: BSTtestCD.o
	g++ -Wall -o BSTtestCD BSTtestCD.o

BSTtestDD.o: BSTtestDD.cpp BinarySearchTree.h
	g++ -Wall -o BSTtestDD.o -c BSTtestDD.cpp
	
BSTtestDD: BSTtestDD.o
	g++ -Wall -o BSTtestDD BSTtestDD.o
clean:
	rm -f BSTtest BSTtest2 BSTtestCL BSTtestCD BSTtestDD *.o