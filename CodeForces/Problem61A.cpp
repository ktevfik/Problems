#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    string s,y;
    cin >> s >> y;
    string t;
    for(int i = 0;i < s.length();i++) {
        if(s[i] == '0' && y[i] == '1') {
            t+= '1';
        }
        else if(s[i] == '0' && y[i] == '0') {
            t+= '0';
        }
        else if(s[i] == '1' && y[i] == '1') {
            t+='0';
        }
        else if(s[i] == '1' && y[i] == '0') {
            t+='1';
        }
    }
    cout << t;
}