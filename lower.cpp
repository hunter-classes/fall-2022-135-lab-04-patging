/*
Author: Patrick Ging
Course: CSCI-135
Instructor: Professor Zamanksy
Assignment: Lab 4

Lower.cpp. Has method to draw right triangle
*/


#include <iostream>


std::string lower_slice(int num_stars, int max_len) {
	// prints a vertical cross section of the triangle
	// will print num_stars starts and the rest spaces

	std::string return_string;

	for(int i=0;i<max_len;i++) {
		if (i<num_stars) {
			return_string = return_string + "*";
		} else {
			return_string = return_string + " ";
		}
	}
	return return_string;
}

std::string lower(int height) {
	// prints a right triangle of height height

	std::string return_string = "\n";

	std::cout << "Slice:" << "\n";

	for (int i=1; i< height+1;i++) {
		return_string = return_string + lower_slice(i, height) + "\n\n";
	}

	return return_string;

}

