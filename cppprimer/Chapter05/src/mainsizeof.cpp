#include <iostream>
#include <string>

using namespace std;

int main() {

	cout << "sizeof(char):" << sizeof(char) << endl;
	cout << "sizeof(short):" << sizeof(short) << endl;
	cout << "sizeof(int):" << sizeof(int) << endl;
	cout << "sizeof(long):" << sizeof(long) << endl;

	cout << "sizeof(float):" << sizeof(float) << endl;
	cout << "sizeof(double):" << sizeof(double) << endl;
	cout << "sizeof(long double):" << sizeof(long double) << endl;

	int i = 0;
	cout << "sizeof int i:" << sizeof i << endl;

	int *pi = &i;
	cout << "sizeof int *pi:" << sizeof pi << endl;  //point's length,4

	double d = 100;
	double *pd = &d;
	cout << "sizeof double *pd:" << sizeof pd << endl; //point's length,4

	int iarr[10];
	cout << "sizeof int iarr[10]:" << sizeof iarr << endl;  //40

	double darr[10];
	cout << "sizeof double darr[10]:" << sizeof darr << endl; //80

	string s("123");
	cout << "sizeof string s('123'):" << sizeof s << endl; //output is 4,because s is reference,the reference's length is 4

	string sarr[10] { "12121" };
	cout << sarr[0] << endl;
	cout << "sizeof string sarr[]:" << sizeof sarr << endl; //reference length

	return 0;

}
