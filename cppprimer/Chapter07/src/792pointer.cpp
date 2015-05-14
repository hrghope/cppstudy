/*
 * 792pointer.cpp
 *
 *  Created on: 2013Äê11ÔÂ2ÈÕ
 *      Author: ronggang
 */
#include <iostream>
#include <string>

using namespace std;

bool isBigger(int i, int j) {
	return i > j;
}


bool isSmaller(int i, int j) {
	return i < j;
}

bool (*fun0(int i))(int,int) {
	if (i == 0) {
		return isBigger;
	}
	return isSmaller;
}


int main792() {
	cout << fun0(0)(1, 2) << endl;
	cout << fun0(1)(1, 2) << endl;
	return 0;
}

