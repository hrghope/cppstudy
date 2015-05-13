/*
 * main600.cpp
 *
 *  Created on: 2013Äê9ÔÂ21ÈÕ
 *      Author: ronggang
 */
#include <iostream>
using namespace std;
int main600() {
	{
		int i = 0;
	}

	//i=2; //error,can't access variable i

	int ival1 = 10, ival2 = 10;
	if (ival1 != ival2)
		ival1 = ival2;
	else
		ival1 = ival2 = 0;

	cout << ival1 << "  " << ival2 << endl;
	return 0;

}

