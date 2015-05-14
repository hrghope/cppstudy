/*
 * 790pointer.cpp
 *
 *  Created on: 2013Äê11ÔÂ2ÈÕ
 *      Author: ronggang
 */

#include <iostream>
#include<string>
using namespace std;

bool a(const string &a, const string &b) {
	return a == b;
}

bool b(const string &a, const string &b) {
	return a != b;
}

bool c(const string &a) {
	return 0;
}

int main790() {


	bool (*p)(const string&, const string&)=0;

	p = a;
	cout << p("a", "a") << endl;

	cout << (*p)("a", "b") << endl;

	p = &b;
	cout << p("a", "a") << endl;

	cout << (*p)("a", "b") << endl;

	typedef bool (*q)(const string&, const string&);
	q q0=a;
	cout << q0("a", "a") << endl;

	//p=c; //function type not exactly match

	p = 0;

	//p("a", "a");//not safe

	int b = 2;
	cout << b << endl;

	//cout << b("a", "b") << endl; variable b hide function b

	return 0;
}
