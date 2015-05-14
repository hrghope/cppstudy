#include<iostream>
#include<vector>

using namespace std;

int main4() {
	vector<int> ivec(10, 100);

	int i = 10;
	for (vector<int>::iterator ite = ivec.begin(); ite != ivec.end(); ite++) {
		cout << *ite << endl;
		*ite = i++;
	}

	for (vector<int>::const_iterator ite = ivec.begin(); ite != ivec.end();
			ite++) {
		cout << *ite << endl;
		//*ite = i++; //error
	}

	const vector<int>::iterator ite = ivec.begin();

	cout << *ite << endl;
	//ite++; //ite is const,error

	/**************************************/

	vector<int>::iterator ite2 = ivec.begin();
	vector<int>::iterator ite3 = ite2 + 5;

	cout << *ite3 << endl;
	cout << ite3 - ite2 << endl;

	/*********************************************/

	//error
	//vector<int>::iterator ite4 = (ivec.begin()+ivec.end())/2;
	//cout<<*ite4<<endl;

	return 0;
}
