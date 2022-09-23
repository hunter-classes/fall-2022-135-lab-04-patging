
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

void upper(int height) {
	// prints a right triangle of height height

	std::string return_string = "\n";

	std::cout << "Slice:" << "\n";

	for (int i=height; i>0;i--) {
		return_string = return_string + upper_slice(i, height) + "\n\n";
	}

	std::cout << return_string;

}
