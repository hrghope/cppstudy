#ifndef MAP_
#define MAP_

template <typename TKey, typename TValue>
class Map {
public:
	virtual void put(TKey key, TValue value)=0;

//	virtual TValue get(TKey key)=0;
//
//	virtual bool contains(TKey key)=0;

	virtual ~Map() {

	}
};

#endif /* MAP_ */

