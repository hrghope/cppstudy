/*
 * profile.cpp
 *
 *  Created on: 2015年3月7日
 *      Author: ronggang.huangrg
 */

#include "profile.h"
#include<stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <iostream>
#include <map>

using namespace std;

long getCurrentTime();

Profile::Profile(string name) :
		name(name), startTime(0), endTime(0) {

}

void Profile::start() {
	startTime = getCurrentTime();
}

void Profile::end() {
	endTime = getCurrentTime();
}

long Profile::getTimeInterval() {
	return endTime - startTime;
}

long getCurrentTime() {
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return tv.tv_sec * 1000 + tv.tv_usec / 1000;
}

/**
 * 注意定义体不能static
 */
Profile& Profile::getInstance(string name) {
	if (!profiles.count(name)) {
		Profile *profile = new Profile(name);
		profiles[name] = profile;
	}

	return *profiles[name];
}

void Profile::printAll() {
	map<string, Profile*>::const_iterator ite = profiles.begin();

	while (ite != profiles.end()) {
		cout << ite->first << "," << ite->second->getTimeInterval();
		ite++;
	}
}

