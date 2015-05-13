/*
 * ForwordIndex.h
 *
 *  Created on: 2015年3月4日
 *      Author: ronggang.huangrg
 */

#ifndef SRC_INDEX_FORWARDINDEX_H_
#define SRC_INDEX_FORWARDINDEX_H_
#include <string>
#include <vector>
#include <map>

using namespace std;

class ForwardIndexEntry;

class ForwardIndex {
	friend ostream& operator<<(ostream& os, const ForwardIndex &forwardIndex);

public:
	ForwardIndexEntry* addEntry(long long docId);
	ForwardIndexEntry* operator[](long long docId);

	ForwardIndexEntry* getEntry(long long docId);

private:
	map<long long, ForwardIndexEntry*> entryMap;
};

class ForwardIndexEntry {
	friend ostream& operator<<(ostream& os, const ForwardIndex &forwardIndex);
	friend class ForwardIndex;

public:
	ForwardIndexEntry(long long docId);

	void addWord(long word);

private:
	long long docId;
	vector<long> words;
};

#endif /* SRC_INDEX_FORWARDINDEX_H_ */
