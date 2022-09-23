/*
Author: Patrick Ging
Course: CSCI-135
Instructor: Professor Zamanksy
Assignment: Lab 4

Checkerboard.cpp. Has method for drawing a checkerboard
*/

#include <iostream>

std::string larger(int length) {
	// generates the longer of the two slices

	std::string st; // return string

	for (int i=0; i<length; i++) {
		st = st + "* ";
	}

	return st;
}

std::string shorter(int length) {
	// generates the shorter of the two slices

	std::string st; // return string

	for (int i=0; i<length; i++) {
		st = st + " *";
	}

	return st;
}

std::string checkerboard(int width, int height) {


	std::string return_string = "Shape:\n"; // string to have concatenation and return 

	std::string l = larger(width);
	std::string s = shorter(width-1);

	for(int i=0; i<height; i++) {

		if (i%2 == 0) {
			return_string = return_string + l + "\n";
		} else {
			return_string = return_string + s + "\n";
		}

	}

	return return_string;

}

