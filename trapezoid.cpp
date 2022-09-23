/*
Author: Patrick Ging
Course: CSCI-135
Instructor: Professor Zamanksy
Assignment: Lab 4

Trapezoid.cpp has trapzoid drawing method and helper funcs
*/


#include <iostream>

std::string create_line(int length, int indentation) {

	// helper method creatiing inidivual lines for trapezoid()

	std::string return_string;

	for(int i=0;i<length;i++) {
		if (i < indentation || i >= length - indentation) {
			return_string = return_string + " ";
		} else {
			return_string = return_string + "*";
		}
	}

	return return_string;
}

std::string trapezoid(int width, int height) {

	// prints an upside down trapezoid. Will print
	// impossible shape if the width and height aren't valid
	if (height*2 > width) {
		return "Impossible shape!";
	}


	std::string return_string = "Shape:\n";
	int num_stars = width;
	int indent = 0;

	for(int i=0; i<height;i++) {
		return_string = return_string + create_line(width, indent) + "\n\n";
		indent++;
	}

	return return_string;

}

