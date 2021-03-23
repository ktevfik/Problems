// PROBLEM = https://codeforces.com/problemset/problem/41/A

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s,t;
    cin >> s >> t;
    int count = 0;
    for(int i = s.length()-1; i >= 0;i--) {
        if(s[s.length()-i-1] == t[i]) {
            count++;
        }
    }
    if(count == s.length()) 
        cout << "YES";
    else
        cout << "NO";
}