/*
 * maindowhile.cpp
 *
 *  Created on: 2013��9��21��
 *      Author: ronggang
 */

#include <iostream>

using namespace std;

int maindowhile() {
	do {
		int v1, v2;
		cin >> v1 >> v2;
		if (cin)
			cout << "sum is :" << v1 + v2 << endl;
	} while (cin);
	return 0;
}

