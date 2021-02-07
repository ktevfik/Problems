// PROBLEM = https://codeforces.com/problemset/problem/271/A

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
    int year;
    cin >> year;
    while(true) {
        year++;
        stringstream ss;
        ss << year;
        string s;
        ss >> s;
        int count = 0;
        for(int i = 0;i < s.length();i++) {
            for(int j = 0;j < s.length();j++) {
                if(s[i] != s[j]) {
                    count++;
                }
            }
            if(count == 12) {
                cout << s;
                return 0;
            }
        }
        ss.clear();
        s.clear();
    }
}