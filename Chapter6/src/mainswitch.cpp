/*
 * mainswitch.cpp
 *
 *  Created on: 2013Äê9ÔÂ21ÈÕ
 *      Author: ronggang
 */

int mainswitch() {
	const int ival = 512, jval = 1024, kval = 4096;

	int bufsize;

	int swt = 512;

	switch (swt) {
	case ival: //ival must be const or literal expression
		bufsize = ival * sizeof(int);
		break;
	case jval:
		bufsize = jval * sizeof(int);
		break;
	case kval:
		bufsize = kval * sizeof(int);
		break;
	}

	return 0;
}

