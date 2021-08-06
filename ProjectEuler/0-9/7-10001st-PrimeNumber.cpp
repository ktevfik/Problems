// PROBLEM = https://projecteuler.net/problem=7

#include <iostream>

using namespace std;

bool isPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int counter = 0;
	for (int i = 2;; i++) {
		if (isPrime(i)) {
			counter++;
		}
		if (counter == 10001) {
			cout << counter << ": " << i << endl;
			break;
		}
	}
	
}