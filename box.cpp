/*
Author: Patrick Ging
Course: CSCI-135
Instructor: Professor Zamanksy
Assignment: Lab 4

Box.cpp contrains box() drawing method
*/

#include <iostream>

std::string box(int width, int height) {

	std::string output_string = "Shape:\n";;
	std::string stack; // individual slices

	for(int i=0; i<width;i++) {
		stack = stack + "*";
	}

	for(int i=0; i<height;i++) {
		output_string = output_string + stack + "\n";
	}

	return output_string;

}
