// PROBLEM = https://projecteuler.net/problem=12

#include <iostream>

using namespace std;

int main(void) {
	
	int sum = 0;
	int counter = 0;
	for (int i = 1;; i++) {
		sum += i;
		for (int j = 1; j <= sum; j++) {
			if (sum % j == 0) counter++;
			if (counter > 500) {
				cout << sum << ": " << counter << endl;
				return 0;
			}
		}
		counter = 0;
	}
}