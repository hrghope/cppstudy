/*
 * DocReader.cpp
 *
 *  Created on: 2015��3��3��
 *      Author: ronggang.huangrg
 */
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "index/wordindex.h"
#include "index/forwardindex.h"
#include "index/invertedindex.h"
#include "util/profile.h"
#include <sstream>
//#include <limits>

using namespace std;

extern long hashCode(string &word);

int main() {
	Profile &allProfile = Profile::getInstance("all");
	allProfile.start();
//	cout << "\t最大值：" << (numeric_limits<long long>::max)();
	string filename = "./input/titles.seg";

	string wordIndexName = "./output/wordIndex.idx";
	string forwardIndexName = "./output/forwardIndex.idx";
	string invertedIndexName = "./output/invertedIndex.idx";

	Profile &readAndBuildProfile = Profile::getInstance("readAndBuild");
	readAndBuildProfile.start();
	ifstream input(filename.c_str());

	WordIndex wordIndex;
	ForwardIndex forwardIndex;
	InvertedIndex invertedIndex;
	string line;
	while (getline(input, line)) {
		stringstream ss(line);
		long long docId;

		ss >> docId;
		ForwardIndexEntry* forwardIndexEntry = forwardIndex.addEntry(docId);

		string word;
		while (ss >> word) {
			long wordHash = hashCode(word);
			wordIndex.add(wordHash, word);
			forwardIndexEntry->addWord(wordHash);
			invertedIndex.add(wordHash, docId);
		}
	}
	readAndBuildProfile.end();
	cout << "readAndBuildProfile:" << readAndBuildProfile.getTimeInterval() << endl;

	Profile allFileProfile = Profile::getInstance("allFile");
	allFileProfile.start();

	Profile &wordIndexProfile = Profile::getInstance("wordIndex");
	wordIndexProfile.start();
	ofstream wordIndexStream(wordIndexName.c_str());
	wordIndexStream << wordIndex;
	wordIndexProfile.end();

	Profile &forwardIndexProfile = Profile::getInstance("forwardIndex");
	forwardIndexProfile.start();
	ofstream forwardIndexStream(forwardIndexName.c_str());
	forwardIndexStream << forwardIndex;
	forwardIndexProfile.end();

	Profile &invertedIndexProfile = Profile::getInstance("invertedIndex");
	invertedIndexProfile.start();
	ofstream invertedIndexStream(invertedIndexName.c_str());
	invertedIndexStream << invertedIndex;
	invertedIndexProfile.end();

	input.close();
	wordIndexStream.close();
	forwardIndexStream.close();
	invertedIndexStream.close();

	allFileProfile.end();

	allProfile.end();

	cout << "all:" << allProfile.getTimeInterval() << endl;

	return 0;
}

