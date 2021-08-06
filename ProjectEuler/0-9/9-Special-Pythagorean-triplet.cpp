// PROBLEM = https://projecteuler.net/problem=9

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	for (float i = 1;i < 1000; i++) {
		float c = 0;
		float sums = 0;
		for (float j = 1; j < 1000; j++) {
			c = sqrt((i * i) + (j * j));
			sums = i + j + c;
			if (sums == 1000) {
				int m = i*j*c;
				cout << m << endl;
				return 0;
			}
		}
	}
}