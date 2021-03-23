// PROBLEM = https://codeforces.com/problemset/problem/4/A

#include <iostream>

using namespace std;

int main() {
    int w;
    cin >> w;
    if(w % 2 == 0) {
        if(w == 2) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }
}