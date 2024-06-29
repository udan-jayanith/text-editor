build: main.cpp include/src/*.cpp 
	g++ main.cpp include/src/*.cpp 

clean:
	rm -f *.o *.txt *.out *.exe build