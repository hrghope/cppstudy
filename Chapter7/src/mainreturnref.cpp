/*
 * mainreturnref.cpp
 *
 *  Created on: 2013Äê9ÔÂ26ÈÕ
 *      Author: ronggang
 */
#include <iostream>
using namespace std;


int &get(int *arry, int index) {
	return arry[index];
}

// i will be destroy after the method return.so don't do this.
int &get2(int i) {
	i += 1;
	return i; //auto reference i
}

int &get3(int &i) {
	i += 1;
	return i;
}

int mainref() {
	int ia[10];
	for (int i = 0; i < 10; i++) {
		get(ia, i) = 0;
	}

	for (int i = 0; i < 10; i++) {
		cout << get(ia, i) << endl;
	}

	int i = 100;

	int j = get2(i);

	cout << "i:" << i << endl;
	cout << "j:" << j << endl;

	i = 100;
	j = get3(i);

	cout << "i:" << i << endl;
	cout << "j:" << j << endl;

}

