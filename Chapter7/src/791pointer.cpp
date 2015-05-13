/*
 * 791pointer.cpp
 *
 *  Created on: 2013Äê11ÔÂ2ÈÕ
 *      Author: ronggang
 */
#include<iostream>
#include<string>

using namespace std;

bool isBigger(const string &a, const string &b) {
	return a > b;
}

bool isBigger2(const string &a, const string &b) {
	return a < b;
}

void useBigger(const string &a, const string &b,
		bool compare(const string &a, const string &b)) {
	if (compare(a, b))
		cout << a << endl;
	else
		cout << b << endl;
}

void useBigger2(const string &a, const string &b,
		bool (*compare)(const string &a, const string &b)) {
	if (compare(a, b))
		cout << a << endl;
	else
		cout << b << endl;
}

int main791() {

	useBigger("a","b",isBigger);


	useBigger("a","b",isBigger2);


	useBigger2("a","b",isBigger);


	useBigger2("a","b",isBigger2);
	return 0;
}

