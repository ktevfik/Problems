// PROBLEM = https://codeforces.com/problemset/problem/231/A

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0;i < n;i++) {
        int a,b,c;
        cin >> a >> b >> c;
        int sum = 0;
        sum = a + b + c;
        if(sum >= 2) {
            count++;
        }
    }
    cout << count;
}