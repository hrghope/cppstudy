/*
 * main400.cpp
 *
 *  Created on: 2013年9月4日
 *      Author: ronggang
 */
#include<iostream>

using namespace std;

int main400() {
	int *pi;

	//pi=100; //error Description	Resource	Path	Location	Type	invalid conversion from 'int' to 'int*' [-fpermissive]

	int i = 100;
	pi = &i;

	cout << "address:" << pi << ",value:" << *pi << endl;

	pi+=100;
	cout << "address:" << pi << ",value:" << *pi << endl; //不安全，如果加大pi的值，可能越界

	return 0;
}

