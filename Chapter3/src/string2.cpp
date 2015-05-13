#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//3.10
int main2() {

	cout<<"input a string contains pucnt(s)"<<endl;
	string pucnts;
	getline(cin,pucnts);

	cout<<"puncts:"<<pucnts<<endl;
	string result;
	for(string::size_type i=0;i<pucnts.size();i++){
		if(!ispunct(pucnts[i])){
			result+=pucnts[i];
		}
	}
	cout<<"puncts:"<<result<<endl;

	return 0;
}
