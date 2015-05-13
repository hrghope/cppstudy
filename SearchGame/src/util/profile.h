/*
 * profile.h
 *
 *  Created on: 2015年3月7日
 *      Author: ronggang.huangrg
 */

#ifndef SRC_UTIL_PROFILE_H_
#define SRC_UTIL_PROFILE_H_
#include <string>
#include <map>
using namespace std;

class Profile {
private:
	long startTime, endTime;
	string name;
	static map<string, Profile*> profiles;
	Profile(string name);

public:
	static Profile& getInstance(string name);
	static void printAll();
	void start();
	void end();
	long getTimeInterval();
};

#endif /* SRC_UTIL_PROFILE_H_ */
