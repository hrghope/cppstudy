/*
 * map.cpp
 *
 *  Created on: 2015Äê1ÔÂ15ÈÕ
 *      Author: ronggang.huangrg
 */
#include "./HashMap.h"
#include <iostream>

using namespace std;

template<typename TKey, typename TValue> void HashMap<TKey, TValue>::put(
		TKey key, TValue value) {
	cout << "key:" << key << ",value:" << value << endl;
}

template<typename TKey, typename TValue> TValue HashMap<TKey, TValue>::get(
		TKey key) {
	cout << "key:" << key << endl;
}

template<typename TKey, typename TValue> bool HashMap<TKey, TValue>::contains(
		TKey key) {
	cout << "key:" << key << endl;
	return false;
}

