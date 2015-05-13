/*
 * HashMap.h
 *
 *  Created on: 2015Äê2ÔÂ1ÈÕ
 *      Author: ronggang.huangrg
 */

#ifndef HASHMAP_H_
#define HASHMAP_H_
#include "./Map.h"


template<typename TKey, typename TValue>
class HashMap: public Map<TKey, TValue> {
public:
	virtual void put(TKey key, TValue value);
	virtual TValue get(TKey key);
	virtual bool contains(TKey key);

	virtual ~HashMap() {

	}
};

#endif /* HASHMAP_H_ */
