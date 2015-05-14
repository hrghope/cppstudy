/*
 * main4.2.cpp
 *
 *  Created on: 2013Äê9ÔÂ1ÈÕ
 *      Author: ronggang
 */

int main420() {
	//////////////////////////4.20
	int i = -1;

	const int ic = -i;

	const int *pic = &ic;

	//int *const cpi = &ic; //error ic is const cpi must be const

	const int * const cpic = &ic;

	//////////////////////////4.21
	i = ic;
	pic = &ic;
	//cpi=pic; //error cpi is error defintion
	pic = cpic;
	//cpic = &ic; // error cpic is const point
	//ic = *cpic; //error ic is const

	return 0;

}

