/*
Author: Patrick Ging
Course: CSCI-135
Instructor: Professor Zamanksy
Assignment: Lab 4

Upper.cpp. Has methods to draw a right triangle rotated 270 degrees
*/

#include <iostream>


std::string upper_slice(int num_stars, int max_len) {
	// prints a vertical cross section of the triangle
	// will print num_stars starts and the rest spaces

	std::string return_string;

	for(int i=0;i<max_len;i++) {
		if (i < max_len - num_stars) {
			return_string = return_string + " ";
		} else {
			return_string = return_string + "*";
		}
	}
	return return_string;
}

std::string upper(int height) {
	// prints a right triangle of height height

	std::string return_string = "\n";

	std::cout << "Slice:" << "\n";

	for (int i=height; i>0;i--) {
		return_string = return_string + upper_slice(i, height) + "\n\n";
	}

	return return_string;

}
