/*
 * wordindex.h
 *
 *  Created on: 2015年3月13日
 *      Author: ronggang.huangrg
 */
#include <map>
#include <string>
#include <iostream>
using namespace std;

class WordIndex {
	friend ostream& operator<<(ostream& os, const WordIndex &wordIndex) ;
private:
	map<long, string> wordMap;

public:
	void add(long hash, string word) {
		wordMap[hash] = word;
	}

};

ostream& operator<<(ostream& os, const WordIndex &wordIndex) {
	map<long, string>::const_iterator ite = wordIndex.wordMap.begin();
	while (ite != wordIndex.wordMap.end()) {
		os << ite->first << ite->second;
		ite++;
	}
	os<<endl;
	return os;
}

