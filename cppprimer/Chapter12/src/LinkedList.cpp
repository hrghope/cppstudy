/*
 * LinkedList.cpp
 *
 *  Created on: 2015年2月16日
 *      Author: ronggang.huangrg
 */
#include "LinkedList.h"
#include <iostream>

using namespace std;

/**
 * 初始化顺序应该和成员变量的顺序一致。
 */
template<typename T> LinkedList<T>::LinkedList() :
		size(0), first(0), last(0) {
}

template<typename T> void LinkedList<T>::add(T t) {
	if (first == 0) {
		LinkedListItem<T> *item = new LinkedListItem<T>(t);
		first = item;
		last = first;
	} else {
		LinkedListItem<T> *item = new LinkedListItem<T>(t);
		//cout<<*item->element<<endl;
		item->before = last;
		last->next = item;
		last = item;
	}
	size++;
}

template<typename T> void LinkedList<T>::remove(int index) {
	if (index >= this->size) {
		return;
	}

	LinkedListItem<T> *findedItem = getItem(index);

	if (findedItem->next != 0) {
		findedItem->before->next = findedItem->next;
		findedItem->next->before = findedItem->before;
	} else {
		findedItem->before->next = 0;
		last = findedItem->before;
	}

	delete findedItem;

	this->size--;
}

template<typename T> T* LinkedList<T>::get(int index) {
	if (index >= this->size) {
		return 0;
	}

	LinkedListItem<T> *findedItem = getItem(index);

	return findedItem->element;
}

template<typename T> LinkedListItem<T>* LinkedList<T>::getItem(
		int index) const {
	if (index >= this->size) {
		return 0;
	}

	LinkedListItem<T> *findedItem = first;
	int i = 0;
	while (i < index) {
		findedItem = findedItem->next;
		i++;
	}
	if (findedItem == 0) {
		return 0;
	}

	return findedItem;
}

template<typename T> int LinkedList<T>::getSize() {
	return size;
}

template<typename T> T* LinkedList<T>::operator[](int index) {
	return get(index);
}

template<typename T>const  T* LinkedList<T>::operator[](int index) const {
	if (index >= this->size) {
		return 0;
	}

	LinkedListItem<T> *findedItem = getItem(index); //const 函数只能调用const函数

	return findedItem->element;
}

