// PROBLEM = https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 1;
    sort(s.begin(),s.end());
    for(int i = 1;i < s.length();i++) {
        if(s[i] != s[i-1]) {
            count++;
        }
    }
    if(count % 2 == 1) {
        cout << "IGNORE HIM!" << endl;
    }
    else {
        cout << "CHAT WITH HER!" << endl;
    }
}