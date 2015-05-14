/*
 * main431.cpp
 *
 *  Created on: 2013年9月7日
 *      Author: ronggang
 */
#include<iostream>
#include<string>
using namespace std;

int main431() {
	int count = 100 * 1024 * 1024;
	char *pc = new char[count](); //不加()不会初始化

	cout << "pause" << endl;

	string s;
	cin >> s;

	delete[] pc;

	cout << "pause" << endl;

	cin >> s;
	return 0;
}

