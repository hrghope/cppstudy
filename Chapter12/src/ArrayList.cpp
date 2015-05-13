/*
 * ArrayList.cpp
 *
 *  Created on: 2015年2月2日
 *      Author: ronggang.huangrg
 */

#include <iostream>
using namespace std;

#include "./ArrayList.h"

template<typename T> ArrayList<T>::ArrayList() :
		size(16), index(0) {
	elements = new T[16];
}

template<typename T> ArrayList<T>::ArrayList(int size) :
		size(size), index(0) {
	elements = new T[size];
}

template<typename T> void ArrayList<T>::add(T t) {
	if (index < size) {
		elements[index++] = t;
	} else {
		//expand
		T *newElements = new T[size << 1]; //扩大一倍
		for (int i = 0; i < size; i++) {
			newElements[i] = elements[i];
		}
		size <<= 1;
		delete[] elements;
		elements = newElements;
		elements[index++] = t;
	}
}

/**
 * 需要移动数组
 */
template<typename T> void ArrayList<T>::remove(int index) {
	if (index >= this->index) {
		return;
	}
	for (int i = index; i < this->index - 1; i++) {
		if (i < this->index) {
			elements[i] = elements[i + 1];
		}
	}
	this->index--;
}

template<typename T> T* ArrayList<T>::get(int index) {
	if (index >= this->index) {
		return 0;
	}

//	if(elements[index]==0)
//		 throw no_such_attribute_error;
	T* t = elements + index;
//	cout<<*t<<endl;
	return t;
}

template<typename T> int ArrayList<T>::getSize() {
	return index;
}

template<typename T> T* ArrayList<T>::operator[](int index) {
	return get(index);
}

template<typename T> const T* ArrayList<T>::operator[](int index) const {
	if (index >= this->index) {
		return 0;
	}

	//	if(elements[index]==0)
	//		 throw no_such_attribute_error;
	T* t = elements + index;
	//	cout<<*t<<endl;
	return t;
}

