/*
Author: Patrick Ging
Course: CSCI-135
Instructor: Professor Zamanksy
Assignment: Lab 4

Cross.cpp. Contains methods for drawing an X of a particualr heigtht, cross(int)*/

#include <iostream>



std::string slice(int spacing, int length) {
	/* 
	 slice(length)

	 return a string of length 2 asterisks with
	 length - 2 spaces in between them

	 eg

	 cross(4)
	 *  * 
	*/

	std::string return_string = "";

	int current_spacing = 0;

	int positions = length - spacing;

	for(int i=0;i<length;i++) {

		if (i + 1 == ((length - spacing) / 2) || (i + 1 == ((length - spacing) / 2 + spacing + 1)) )  {
			return_string = return_string + "*";
		} else {
			return_string = return_string + " ";
		}

	}

	return return_string;

}

std::string cross(int height) {

	std::string return_string = "Shape:\n"; // init canvas

	// presuming that height % 2 == 0


	for (int i = height/2; i > 0;i--) {

		return_string = return_string + slice(i*2 - 2, height) + "\n";
		return_string = return_string + "\n";
	}

	for (int i = 1; i<height/2 +1 ;i++) {
		return_string = return_string + slice(i*2 - 2, height) + "\n";
		return_string = return_string + "\n";
	}



	return return_string;
}
