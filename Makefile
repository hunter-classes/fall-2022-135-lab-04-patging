#Patrick Ging
#makefile


main: main.o box.o checkerboard.o lower.o upper.o trapezoid.o cross.o checkerboard3x3.o
	g++ -o main main.o box.o checkerboard.o lower.o upper.o trapezoid.o cross.o checkerboard3x3.o

#o files

main.o: main.cpp box.h checkerboard.h lower.h upper.h trapezoid.h cross.h checkerboard3x3.h
	g++ -c main.cpp

box.o: box.cpp box.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp checkerboard.h
	g++ -c checkerboard.cpp

lower.o: lower.cpp lower.h 
	g++ -c lower.cpp

upper.o: upper.cpp upper.h  
	g++ -c upper.cpp

trapezoid.o: trapezoid.cpp trapezoid.h 
	g++ -c trapezoid.cpp 

cross.o: cross.cpp cross.h 
	g++ -c cross.cpp 

checkerboard3x3.o: checkerboard3x3.cpp checkerboard3x3.h 
	g++ -c checkerboard3x3.cpp


# misc

clean: 
	rm -f main.o box.o checkerboard.o lower.o upper.o trapezoid.o cross.o checkerboard3x3.o