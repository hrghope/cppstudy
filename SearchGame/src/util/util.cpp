#include <string>


using namespace std;

long hashCode(string &word) {
	long h = 0;
	int i = word.length();

	while (i > 0) {
		h = 107 * h + word.c_str()[--i];
	}
	return h;
}


