/*
 * vectortest.cpp
 *
 *  Created on: 2015Äê3ÔÂ7ÈÕ
 *      Author: ronggang.huangrg
 */
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
	vector<string> svector;

	cout << sizeof(svector) << endl;
	svector.push_back("aaa");
	svector.push_back("aaaaaaaaaaaaaaaaaaaaa");
	svector.push_back("aaa");
	svector.push_back("aaa");
	svector.push_back("aaa");
	svector.push_back("aaa");
	svector.push_back("aaa");
	svector.push_back("aaa");
	svector.push_back("aaa");
	svector.push_back("aaa");

	cout << sizeof(svector) << endl;

	cout << &svector[0] << endl;
	cout << &svector[1] << endl;
	cout << &svector[2] << endl;
	cout << &svector[3] << endl;
}

