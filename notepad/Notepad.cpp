/*
 * Notepad.cpp
 *
 *  Created on: 2015Äê1ÔÂ9ÈÕ
 *      Author: ronggang.huangrg
 */
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string fileName("D:/tmp/c++/output/1.txt");
	ofstream out(fileName.c_str());
	if (!out) {
		cout << "file open failed" << endl;
		return -1;
	}
	string inputLine;
	while (cin >> inputLine) {
		if (!out) {
			cout << "io error" << endl;
			return -1;
		}
		out << inputLine << endl;
	}
	out.close();

	cout << "file closed." << endl << "file content:" << endl;

	ifstream input(fileName.c_str());

	while (input >> inputLine) {
		cout << inputLine << endl;
	}

	input.close();

	return 0;
}

