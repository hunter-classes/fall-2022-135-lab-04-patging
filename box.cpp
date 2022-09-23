#include <iostream>

void box(int width, int height) {

	std::cout << "Shape:" << "\n";

	std::string output_string;
	std::string stack; // individual slices

	for(int i=0; i<width;i++) {
		stack = stack + "*";
	}

	for(int i=0; i<height;i++) {
		output_string = output_string + stack + "\n";
	}

	std::cout << output_string;

}
