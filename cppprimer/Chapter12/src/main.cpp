/*
 * main.cpp
 *
 *  Created on: 2015年2月1日
 *      Author: ronggang.huangrg
 */

#include <string>
//#include "./HashMap.cpp"
//#include "./ArrayList.h"
#include "./ArrayList.cpp"
#include "./LinkedList.cpp"
#include <iostream>
#include<stdlib.h>
#include <stdio.h>
#include <sys/time.h>

using namespace std;

void testString();

/**
 * 获取当前系统毫秒
 */
long getCurrentTime();

void performaceTest();

void linkedListTest() {
	long start = getCurrentTime();

	List<int> *list = new LinkedList<int>();

	for (int i = 0; i < 10000000; i++) {
		list->add(i);
	}

	//print all
//	for (int i = 0; i < 10000000; i++) {
//		*list->get(i);
//		cout << *list->get(i) << endl;
//	}

	cout << list->getSize() << endl;
	cout << *list->get(25) << endl;
	cout << *(*list)[25] << endl;

	*(*list)[25] = 250;

	cout << *(*list)[25] << endl;

	list->remove(25);
	cout << *list->get(25) << endl;

	cout << list->get(100) << endl;

	long end = getCurrentTime();

	cout << end - start << endl;
}

void linkedListTest4const() {

	List<int> *list = new LinkedList<int>();

	for (int i = 0; i < 1000; i++) {
		list->add(i);
	}

	const List<int> *list2 = list;

	//const对象无法修改
	//*(*list2)[25] = 250;

	cout << *(*list2)[25] << endl;

}

int main() {
	//performaceTest();
	linkedListTest();
	linkedListTest4const();

	return 0;
}

void performaceTest() {
	long start = getCurrentTime();

	List<int> *list = new ArrayList<int>(10000000);

	for (int i = 0; i < 10000000; i++) {
		list->add(i);
	}

	long end = getCurrentTime();

	cout << end - start << endl;

	start = getCurrentTime();

	for (int i = 0; i < 10000000; i++) {
		list->get(i);
	}

	end = getCurrentTime();

	cout << end - start << endl;

}

void testInt() {
	List<int> *list = new ArrayList<int>();

	for (int i = 0; i < 32; i++) {
		list->add(i);
	}

	cout << list->getSize() << endl;
	cout << *list->get(25) << endl;
	list->remove(25);
	cout << *list->get(25) << endl;

	cout << list->get(100) << endl;
}

void testString() {
	List<string> *list2 = new ArrayList<string>();

	for (int i = 0; i < 32; i++) {
		string s = "srt" + to_string(i);
		list2->add(s);
	}

	cout << "size:" << list2->getSize() << endl;

	cout << "value 25:" << *list2->get(25) << endl;
	cout << "value 31:" << *list2->get(31) << endl;
	list2->remove(25);
	cout << "size:" << list2->getSize() << endl;
	cout << "value 31:" << list2->get(31) << endl;
	cout << "value 25:" << *list2->get(25) << endl;

	cout << "value 100:" << list2->get(100) << endl;
}

long getCurrentTime() {
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return tv.tv_sec * 1000 + tv.tv_usec / 1000;
}

