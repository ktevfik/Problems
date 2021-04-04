#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int numbers[3];
    for(int i = 0;i < n;i++) {
        cin >> numbers[0] >> numbers[1] >> numbers[2];
        long long int col = ceil(double(numbers[2]) / numbers[0]) - 1;
        long long int row = ((numbers[2] % numbers[0]) + numbers[0] - 1) % numbers[0];
        cout << (row * numbers[1]) + (col+1) << endl;
    }
}