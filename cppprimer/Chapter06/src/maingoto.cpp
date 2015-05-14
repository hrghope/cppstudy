/*
 * maingoto.cpp
 *
 *  Created on: 2013Äê9ÔÂ21ÈÕ
 *      Author: ronggang
 */
#include <iostream>

using namespace std;

int maingoto() {
	int init = 10;

	init: int i = 0;   // can;t confilct with the variable init
	cout << "i:" << i << endl;

	i = 10;

	cout << "i:" << i << endl;

	init--;

	if (init)
		goto init;

	return 0;
}

