/*
Author: Patrick Ging
Course: CSCI-135
Instructor: Professor Zamanksy
Assignment: Lab 4

Main file. Runs tests of the other drawing funcs
*/




#include <iostream>

// imports from within
#include "checkerboard.h"
#include "box.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "cross.h"
#include "checkerboard3x3.h"

int main()
{

	// various tests

	std::cout << "box(4,3):\n";
	std::cout << box(4,3);
	std::cout << "\n------------------\n"; // seperator 	

	std::cout << "checkerboard(10,6):\n";
	std::cout << checkerboard(10,6);
	std::cout << "\n------------------\n"; // seperator 

	std::cout << "Cross(8):\n";
	std::cout << cross(8);
	std::cout << "\n------------------\n"; // seperator 

	std::cout << "lower(6):\n";
	std::cout << lower(6);
	std::cout << "\n------------------\n"; // seperator 

	std::cout << "upper(6):\n";
	std::cout << upper(6);
	std::cout << "\n------------------\n"; // seperator 

	std::cout << "trapezoid(12, 6):\n";
	std::cout << trapezoid(12,6);
	std::cout << "\n------------------\n"; // seperator 

	std::cout << "trapzoid(12, 7): *should return Impossible Shape!*\n";
	std::cout << trapezoid(12,7);
	std::cout << "\n------------------\n"; // seperator 

	std::cout << "checkerboard3x3(16, 11):\n";
	std::cout << checkerboard3x3(16,11);
	std::cout << "\n------------------\n"; // seperator 

	std::cout << "checkerboard3x3(27, 27):\n";
	std::cout << checkerboard3x3(27,27);
	std::cout << "\n------------------\n"; // seperator 

	return 0;
}