/*
 * Merge2OneLine.cpp
 *
 *  Created on: 2015��1��19��
 *      Author: ronggang.huangrg
 */

#include <fstream>

#include <string>

using namespace std;

int main() {
	string inputName = "D:/tmp/c++/output/supply id.txt";

	string outputName = "D:/tmp/c++/output/supply id merged.txt";

	ifstream input(inputName.c_str());
	ofstream output(outputName.c_str());

	string line;

	while(input>>line){
		output<<line;
	}
	output.close();
	input.close();
	return 0;
}

