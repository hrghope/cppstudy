/*
 * main430.cpp
 *
 *  Created on: 2013Äê9ÔÂ7ÈÕ
 *      Author: ronggang
 */

#include <iostream>

using namespace std;

int main() {
	const char *cp = "1234567890";

	cout << "1th" << endl;
	for (const char *p = cp; *p != '\0'; p++) {
		cout << *p << endl;
	}
	cout << "2nd" << endl;
	for (const char *p = cp; *p; p++) {
		cout << *p << endl;
	}
	cout << "3rd" << endl;
	for (const char *p = cp; *p != '\0'; p++) {
		cout << *p << endl;
	}

	return 0;
}

