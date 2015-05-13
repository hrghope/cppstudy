/*
 * maintry.cpp
 *
 *  Created on: 2013Äê9ÔÂ21ÈÕ
 *      Author: ronggang
 */

#define NDEBUG   // must be before include segment

#include <iostream>
#include <stdexcept>
#include <cassert>



using namespace std;

int maintry() {
	int i;
	cin >> i;
	assert (i<0);
	try {
		int j = 100;
		if (i < 0)
			throw runtime_error("variable i can't be negative number");
	} catch (runtime_error e) {
		//cout << j << endl; // error,can't access varaible j that it's be defined in try block
		cout << e.what() << endl;
	}
	cout<<"i:"<<i<<endl;

	cin>>i;
	return 0;

}

