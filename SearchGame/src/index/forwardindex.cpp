/*
 * forwardindex.cpp
 *
 *  Created on: 2015年3月4日
 *      Author: ronggang.huangrg
 */
#include <string>
#include <iostream>
#include "forwardindex.h"
#include <sstream>
#include <vector>

using namespace std;

ForwardIndexEntry::ForwardIndexEntry(long long docId) :
		docId(docId) {
}

void ForwardIndexEntry::addWord(long word) {
	words.push_back(word);
}

ForwardIndexEntry* ForwardIndex::addEntry(long long docId) {
	ForwardIndexEntry *entry = new ForwardIndexEntry(docId);
	entryMap[docId] = entry;
	return entry;
}

ForwardIndexEntry* ForwardIndex::operator[](long long docId) {
	return entryMap[docId];
}

ForwardIndexEntry* ForwardIndex::getEntry(long long docId) {
	return entryMap[docId];
}

ostream& operator<<(ostream& os, const ForwardIndex &forwardIndex) {
	map<long long, ForwardIndexEntry*>::const_iterator ite = forwardIndex.entryMap.begin();

	while (ite != forwardIndex.entryMap.end()) {
		const ForwardIndexEntry* forwardIndexEntry = ite->second;
		os << ite->first /*doc Id*/<< forwardIndexEntry->words.size();
		for (unsigned int j = 0; j < forwardIndexEntry->words.size(); j++) {
			os << forwardIndexEntry->words[j];
		}
		os << endl;
		ite++;
	}

	return os;
}

//istream& operator>>(istream& is,  ForwardIndex &forwardIndex) {
//	for (unsigned int i = 0; i < forwardIndex.entries.size(); i++) {
//		const ForwardIndexEntry &entry = forwardIndex.entries[i];
//		os << entry.docId << entry.wordSize;
//		for (int j = 0; j < entry.wordSize; j++) {
//			os << entry.words[j];
//		}
//		os<<endl;
//	}
//	return os;
//}
