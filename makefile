build: main.cpp include/src/create.cpp
	g++ main.cpp include/src/create.cpp

clean:
	rm -f *.o *.txt *.out *.exe build