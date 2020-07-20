//============================================================================
// Name        : cpp-dec2bin.cpp
// Author      : Tobias Gion
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main(int argc, const char* argv[]) {

	std::cout << "**********************************************" << std::endl;
	std::cout << "**** Convert int number to binary (8-bit) ****" << std::endl;
	std::cout << "**********************************************" << std::endl;
	std::cout << "" << std::endl;

	if (argc != 2) {
		std::cout << "Give me one argument (decimal integer)!" << std::endl;
		std::cout << "Exciting with error code 1." << std::endl;
		return 1;
	}
	else {

		int dec = 0;
		int result[7];
		int i;

		stringstream geek(argv[1]);
		geek >> dec;

		cout << "You entered the following number: " << dec << endl;

		if ((dec < 0) || (dec > 255)) {
			cout << "The number has to be between 0 and 255 (8-bit integer)." << endl;
			cout << "Exciting with error code 2." << endl;
			return 2;
		}

		cout << "The binary number is (LSB) : ";

		for (i = 0; i < 8; i++) {
			// Write the modulo of our number and 2 to the string array
			result [i] = dec % 2;
			cout << result[i];

			dec = dec / 2;
		}
		cout << endl;

		//Print out in MSB format
		cout << "The binary number is (MSB) : ";

		for (i = 7; i >= 0; i--) {
			cout << result[i];
		}
		cout << endl;

	}
	return 0;
}
