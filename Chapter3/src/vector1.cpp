#include <vector>
#include <iostream>

using namespace std;

int main3(){
	vector<int> ivec1;
	vector<int> ivec2(10);
	vector<int> ivec3(10,3);
	vector<int> ivec4(ivec3);

	cout<<"ivec1 is empty?"<<ivec1.empty()<<endl;
	cout<<"ivec3's size:"<<ivec3.size()<<endl;
	cout<<"ive4's 4th item:"<<ivec4[3]<<endl;

	ivec1.push_back(2);
	ivec1.push_back(3);
	vector<int> ivec5;
	ivec5=ivec1;
	cout<<"ivec5's size:"<<ivec5.size()<<endl;

	cout<<"ivec5's 2nd item:"<<ivec5[1]<<endl;

	ivec5[1]=10;
	cout<<"ivec5's 2nd item:"<<ivec5[1]<<endl;

	cout<<"iterator ivec5's all items"<<endl;
	for(vector<int>::size_type i=0;i<ivec5.size();i++){
		cout<<ivec5[i]<<endl;
	}

	return 0;
}
