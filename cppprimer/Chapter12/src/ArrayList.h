/*
 * ArrayList.h
 *
 *  Created on: 2015��2��2��
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
	int size; //Ŀǰ�����������
	int index; //��ǰ����ֵ��
	T *elements; //���飬�����洢
};

#endif /* ARRAYLIST_H_ */

