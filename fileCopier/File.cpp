#include <iostream>
#include <string>
#include <fstream>
#include <sys/time.h>

using namespace std;

/**
 * 获取当前毫秒
 */
long getCurrentTime() {
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return tv.tv_sec * 1000 + tv.tv_usec / 1000;
}

int main() {
	long start = getCurrentTime();
	string filename("D:/tmp/c++/output/titles.seg");

	ofstream output("D:/tmp/c++/output/1.txt");
	ifstream input(filename.c_str());

	string line;

	while (getline(input, line)) {
		output << line <<"\n";
	}

	output << flush;

	time_t end = getCurrentTime();

	cout << end - start << endl;

	return 0;
}
