/*
 * List.h
 *
 *  Created on: 2015��2��2��
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

	//constʵ��ֻ�ܵ���const��Ա�������ʱ���б�Ҫ�ṩconst�汾����constʵ�����Ե���const�ͷ�const��Ա�����Ƿ�constΪ���õ�ƥ��
	//ͨ��const������ʣ�Ӧ�÷���constָ�룬��������޸�
	virtual const T* operator[](int index) const =0;

//	virtual const T* operator[](int index) const =0;

	virtual ~List() {

	}
};

#endif /* LIST_H_ */
