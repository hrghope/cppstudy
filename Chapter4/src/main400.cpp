/*
 * main400.cpp
 *
 *  Created on: 2013��9��4��
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
	cout << "address:" << pi << ",value:" << *pi << endl; //����ȫ������Ӵ�pi��ֵ������Խ��

	return 0;
}

