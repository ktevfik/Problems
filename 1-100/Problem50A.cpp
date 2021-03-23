// PROBLEM = https://codeforces.com/problemset/problem/50/A

#include <iostream>

using namespace std;

int main() {
    int n,k,count = 0;
    cin >> n >> k;
    int mul = n * k;
    while(mul >= 2) {
        mul-=2;
        count++;
    }
    cout << count;
}