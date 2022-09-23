/*
Author: Patrick Ging
Course: CSCI-135
Instructor: Professor Zamanksy
Assignment: Lab 4

Checkerboard3x3.cpp has methods for drawing the 3x3 checkerboard
*/


#include <iostream>


std::string colored_slice(int len) {
	//helper method to help create the colored dominat slice
	std::string return_string;

	bool is_colored = false;

	for (int i=0;i<len;i++) {
		if (i*2 % 6 == 0) {
			is_colored = ! is_colored;
		}

		if (is_colored) {

			return_string = return_string + "*";

		} else {

			return_string = return_string + " ";

		}
	}

	return return_string;

}

std::string noncolored_slice(int len) {
	// helper method to create the white dominant slice

	std::string return_string;

	bool is_colored = false;

	for (int i=0;i<len;i++) {
		if (i*2 % 6 == 0) {
			is_colored = ! is_colored;
		}

		if (is_colored) {

			return_string = return_string + " ";

		} else {

			return_string = return_string + "*";

		}
	}

	return return_string;

}

std::string checkerboard3x3(int width, int height) {

	std::string return_string;

	bool is_colored = false;

	for (int i=0;i<height;i++) {
		if (i*2 % 6 == 0) {
			is_colored = ! is_colored;
		}

		if (is_colored) {

			return_string = return_string + colored_slice(width) + "\n";

		} else {

			return_string = return_string + noncolored_slice(width) + "\n";

		}
	}
	return_string = "Shape:\n" + return_string;

	return return_string;
}

