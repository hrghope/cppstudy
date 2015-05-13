/*
 * ArrayList.h
 *
 *  Created on: 2015年2月2日
 *      Author: ronggang.huangrg
 */

#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_
#include "List.h"

template<typename T>
class ArrayList: public List<T> {
public:
	ArrayList();

	ArrayList(int size);

	void add(T t);
	T* get(int index);
//	bool contains(T t);
	virtual void remove(int index);
	int getSize();

	virtual T* operator[](int index);
	virtual const  T* operator[](int index) const;

	virtual ~ArrayList() {
		delete[] elements;
	}
private:
	int size; //目前数组最大容量
	int index; //当前索引值，
	T *elements; //数组，连续存储
};

#endif /* ARRAYLIST_H_ */

