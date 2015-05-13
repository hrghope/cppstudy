/*
 * main.cpp
 *
 *  Created on: 2013Äê9ÔÂ13ÈÕ
 *      Author: ronggang
 */

#include <cstdlib>
#include <iostream>
#include <sstream>

using namespace std;

extern string getRandomDigit(int );

int main() {
	int length = 8;
	string result;
	while (length > 0) {
		result += getRandomDigit(3);
		length--;
	}

	cout << result << endl;

	cout << "pause any key to continue" << endl;

	string temp;

	cin >> temp;
	return 0;
}


string getRandomDigit(int i) {
	int random = rand() % 10;
	ostringstream convert;   // stream used for the conversion

	convert << random; // insert the textual representation of 'Number' in the characters in the stream

	return convert.str();
}
