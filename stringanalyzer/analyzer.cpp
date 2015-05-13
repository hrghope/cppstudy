/*
 * analyzer.cpp
 *
 *  Created on: 2015Äê1ÔÂ13ÈÕ
 *      Author: ronggang.huangrg
 */

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	string filename = "D:/tmp/c++/output/titles.seg";

	ofstream output("D:/tmp/c++/output/2.txt");

	ifstream input(filename.c_str());

	string line;
	while (input >> line) {
		string word;
		istringstream stream(line);

		cout << "value:" << stream << endl;
		cout << "address:" << &stream << endl;
		while (stream >> word) {
			cout << "value:" << stream << endl;
			cout << "address:" << &stream << endl;
			cout << word << "\n";
		}
		cout << "value:" << stream << endl;
		cout << "address:" << &stream << endl;
		cout << "value:" << *(&stream) << endl;
		cout << flush;
		break;

	}
	input.close();
	output.close();
	return 0;
}

