
#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int cumulation = 0;
	for (int i = 1; i < 1000; i++) {

		if (i % 3 == 0 || i % 5 == 0) {
			cumulation = cumulation + i;

		}
	}

	cout << cumulation << endl;
	return 0;
}