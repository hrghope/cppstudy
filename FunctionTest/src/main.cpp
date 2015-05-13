/*
 * main.cpp
 *
 *  Created on: 2015��2��17��
 *      Author: ronggang.huangrg
 */
#include <iostream>

using namespace std;

int * const get() {
	static int *i = 0;
	if (i == 0) {
		i = new int;
	}

	*i = 100;
	cout << "in get:" << i << endl;
	return i;
}

int main() {
	int *i = get();
	cout << "in main:" << i << endl;

	int j = 20;

	i = &j;

	cout << "in main:" << i << endl;

	get();

	return 0;
}

