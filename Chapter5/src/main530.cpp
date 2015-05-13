/*
 * main530.cpp
 *
 *  Created on: 2013Äê9ÔÂ15ÈÕ
 *      Author: ronggang
 */
#include<vector>
#include<string>

using namespace std;
int main530() {
	vector<string> svec(0);
	vector<string> *pvec1 = new vector<string>(10);

//	vector<string> **pvec2=new vector<string>[10]; error
	vector<string> *pvec2 = new vector<string> [10];

	vector<string> *pv1 = &svec;
	vector<string> *pv2 = pvec1;

	//delete svec; error
	delete pvec1;
	delete[] pvec2;
	delete pv1; //no warn error ,but error.pv1 is not point to dynamic object
	delete pv2;

	return 0;

}

