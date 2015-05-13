/*
 * mainwhile.cpp
 *
 *  Created on: 2013年9月21日
 *      Author: ronggang
 */
#include <iostream>

using namespace std;

int mainwhile() {

	// copy the array
	int iarr[10] { 1, 3, 1, 6, 7, 3, 5, 8, 3, 2 };
	int *source = iarr;

	cout << "sizeof(iarr):" << sizeof(iarr) << endl;
	cout << "sizeof(*iarr):" << sizeof(*iarr) << endl;

	size_t sz = sizeof(iarr) / sizeof(*iarr); //求数组长度
	cout << "sz:" << sz << endl;

	int *dest = new int[sz];
	while (source != iarr + sz) {
		*dest++ = *source++;
	}

	cout << *(dest - 1) << endl;

	string bufString, word;

	while (cin >> bufString >> word) {
		cout << "bufString:" << bufString << ",word:" << word << endl;
	}

	return 0;
}

