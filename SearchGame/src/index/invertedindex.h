/*
 * invertedindex.h
 *
 *  Created on: 2015年3月7日
 *      Author: ronggang.huangrg
 */
#include <map>
#include <vector>
#include <iostream>

using namespace std;

class InvertedIndex {
	friend ostream& operator<<(ostream& os, const InvertedIndex & invertedIndex);

private:
	map<long/*word hash*/, vector<long long/*doc id*/> > word2DocIds;

public:
	void add(long word, long long docId);

};
