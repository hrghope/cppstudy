#include <iostream>

using namespace std;

int main410() {
	int len;

	cin >> len;

	int ac[len]; //����ʱҲ�ܹ���ʼ�����飿

	int i = 0;
	for (int *cp = ac; cp != ac + len; cp++) {
		*cp = i++;
	}

	for (int *cp = ac; cp != ac + len; cp++) {
		cout << *cp << endl;
	}
}
