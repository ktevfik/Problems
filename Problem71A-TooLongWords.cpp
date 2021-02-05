// PROBLEM = https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> k;

    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        k.push_back(t);
    }

    for (int i = 0; i < n; i++) {
        if (k[i].length() <= 10) {
            cout << k[i] << endl;
        }
        else if (k[i].length() > 10) {
            cout << k[i].front() << k[i].length() - 2 << k[i].back() << endl;
        }
    }
}