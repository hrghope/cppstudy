/*
 * fundefine.cpp
 *
 *  Created on: 2013Äê10ÔÂ7ÈÕ
 *      Author: ronggang
 */
#include <iostream>

using namespace std;

//define
int *fun1(int,int *,int &);

int &fun2();

int main0(){
	//int &i=fun2();


	int len=2*1204*1024;
	char k[len];
	for(int j=0;j<len;j++){
		k[j]=100;
	}

	//cout<<i<<endl;
	return 0;
}

int &fun2(){
	int i=1; //not safe
	return i;
}


