#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string s0;
int main0() {
	string s1;
	string s2("abc");
	string s3(10,'a');

	cout<<"s0:"<<s0<<endl;

	cout<<s1.empty()<<endl;

	cout<<s2[2]<<endl;
	cout<<"toupper(s2[2]):"<<(char)toupper(s2[2])<<endl;

	cout<<s3<<endl;
	string::size_type i=s3.size();
	cout<<"the size of string s3:"<<i<<endl;

	cout<<s3.size()<<endl;

	string line;

	cout<<"input any lines"<<endl;
	while(getline(cin,line))
		cout<<"input:"<<line<<endl;

	cout<<"input end!"<<endl;

	cout<<"input a string contains pucnt(s)"<<endl;
	string pucnts;
	getline(cin,pucnts);

	cout<<"puncts:"<<pucnts<<endl;
	for(string::size_type i=0;i<pucnts.size();i++){
		if(ispunct(pucnts[i])){
			pucnts[i]=' ';
		}
	}
	cout<<"puncts:"<<pucnts<<endl;

	return 0;
}
