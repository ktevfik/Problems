// PROBLEM = https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int upper_count = 0, lower_count = 0;
    for(int i = 0;i < s.length();i++) {
        if(islower(s[i])) lower_count++;
        else if(isupper(s[i])) upper_count++;
    }
    if(lower_count >= upper_count) {
        for(int i = 0;i < s.length();i++) {
            s[i] = tolower(s[i]);
        }
    }
    else if(lower_count < upper_count) {
        for(int i = 0;i < s.length();i++) {
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
}