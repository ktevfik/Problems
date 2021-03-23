// PROBLEM = https://codeforces.com/problemset/problem/546/A

#include <iostream>

using namespace std;

int main() {
    int c , m , p;
    cin >> c >> m >> p;
    int sum = 0;
    for(int i = 1;i <= p;i++) {
        sum += i * c;
    }
    if(m >= sum) cout << "0";
    else cout << sum-m;
}