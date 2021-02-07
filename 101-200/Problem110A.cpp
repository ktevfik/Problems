// PROBLEM = https://codeforces.com/problemset/problem/110/A

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    int length = s.length();
    int counter = 0;
    int seven = count(s.begin(),s.end(), '7');
    int four = count(s.begin(),s.end(),'4');
    if(seven+four == 4 ||seven+four == 7) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}