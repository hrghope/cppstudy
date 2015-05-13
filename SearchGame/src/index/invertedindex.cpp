/*
 * invertedindex.h
 *
 *  Created on: 2015年3月7日
 *      Author: ronggang.huangrg
 */
#include "invertedindex.h"
#include <string>
#include <map>
#include <vector>

using namespace std;

void InvertedIndex::add(long word, long long docId) {
	word2DocIds[word].push_back(docId);
}

ostream& operator<<(ostream& os, const InvertedIndex & invertedIndex) {
	map<long/*word hash*/, vector<long long/*doc id*/> >::const_iterator ite = invertedIndex.word2DocIds.begin();
	while (ite != invertedIndex.word2DocIds.end()) {
		const vector<long long> docIds = ite->second;
		os << ite->first << ",";
		vector<long long>::const_iterator docIdIte = docIds.begin();
		while(docIdIte!=docIds.end()){
			os<<","<<*docIdIte;
			docIdIte++;
		}
		ite++;
	}
	os<<endl;
	return os;
}

