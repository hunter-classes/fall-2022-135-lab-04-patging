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

	for(int i=1;i<length+1;i++) {

		if (i ==  || i == (length - spacing) + (spacing)) {
			return_string = return_string + "*";
		} else {
			return_string = return_string + " ";
		}

	}

	return return_string;

}

void cross(int height) {

	std::string return_string; // init canvas

	// presuming that height % 2 == 0

	for (int i =height/2; i > 0;i--) {

		return_string = return_string + slice(i*2, height) + "\n";
		return_string = return_string + "\n";
	}

	for (int i = 0; i<height/2 ;i++) {
		return_string = return_string + slice(i*2, height) + "\n";
		return_string = return_string + "\n";
	}



	std::cout << return_string << std::endl;

}



int main() {

	cross(8);

	return 0;
}