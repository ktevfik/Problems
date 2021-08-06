// PROBLEM = https://projecteuler.net/problem=10

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
	unsigned long long int sum = 0;
	for (int i = 2;i < 2000000; i++) {
		if (isPrime(i)) {
			sum += i;
		}
	}
	cout << sum << endl;
}