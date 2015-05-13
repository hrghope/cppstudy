#include <iostream>

using namespace std;

int main410() {
	int len;

	cin >> len;

	int ac[len]; //运行时也能够初始化数组？

	int i = 0;
	for (int *cp = ac; cp != ac + len; cp++) {
		*cp = i++;
	}

	for (int *cp = ac; cp != ac + len; cp++) {
		cout << *cp << endl;
	}
}
