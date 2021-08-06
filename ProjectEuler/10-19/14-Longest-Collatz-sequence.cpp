// PROBLEM = https://projecteuler.net/problem=14

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> chain_length;
	long long int copy = 0, counter = 1;

	int max = 0;
	for (int i = 999999; i > 800000; i--) {

		copy = i;
		chain_length.push_back(i);
		
		while (copy != 1 && copy >= 0 ) {
			if (copy % 2 == 0) {
				copy = copy / 2;
				
			}
			else {
				copy = copy * 3 + 1;
			}
			counter++;
		}
		if (counter > max) max = counter;
		chain_length.push_back(counter);
		counter = 1;
	}

	for (int i = 0; i < chain_length.size(); i++) {
		if (chain_length[i] == max) {
			cout << chain_length[i - 1] << ":" << chain_length[i] << endl;
			return 0;
		}
	}
}
