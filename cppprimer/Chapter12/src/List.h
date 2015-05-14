/*
 * List.h
 *
 *  Created on: 2015年2月2日
 *      Author: ronggang.huangrg
 */

#ifndef LIST_H_
#define LIST_H_

template<typename T>
class List {
public:
	virtual void add(T t)=0;
	virtual void remove(int index)=0;
//	virtual bool contains(T t)=0;
	virtual int getSize() const =0;
	virtual T* get(int index) const =0;

	virtual T* operator[](int index)=0;

	//const实例只能调用const成员。因此有时候有必要提供const版本。非const实例可以调用const和非const成员，但是非const为更好的匹配
	//通过const对象访问，应该返回const指针，避免对象被修改
	virtual const T* operator[](int index) const =0;

//	virtual const T* operator[](int index) const =0;

	virtual ~List() {

	}
};

#endif /* LIST_H_ */
