// PROBLEM = https://projecteuler.net/problem=6

#include <iostream>

using namespace std;

int main() {
	int sumN = 0;
	for (int i = 0; i <= 100; i++) {
		sumN += i * i;
	}
	int sum_n_ALL = 0;
	for (int i = 0; i <= 100; i++) {
		sum_n_ALL += i;
	}
	int sum_n_ALL_sq = sum_n_ALL * sum_n_ALL;
	int difference = sum_n_ALL_sq - sumN;
	cout << difference << endl;
}