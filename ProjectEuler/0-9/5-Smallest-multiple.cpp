// PROBLEM = https://projecteuler.net/problem=5

#include <iostream>

using namespace std;

int main() {
	for (int i = 10;; i++) {
		int count = 0;
		for (int j = 1; j <= 20; j++) {
			if (i % j == 0) {
				count++;
			}
		}
		if (count == 20) {
			cout << i << endl;
			break;
		}
	}
}