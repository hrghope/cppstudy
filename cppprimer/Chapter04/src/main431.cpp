/*
 * main431.cpp
 *
 *  Created on: 2013��9��7��
 *      Author: ronggang
 */
#include<iostream>
#include<string>
using namespace std;

int main431() {
	int count = 100 * 1024 * 1024;
	char *pc = new char[count](); //����()�����ʼ��

	cout << "pause" << endl;

	string s;
	cin >> s;

	delete[] pc;

	cout << "pause" << endl;

	cin >> s;
	return 0;
}

