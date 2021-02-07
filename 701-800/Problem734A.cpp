// PROBLEM = https://codeforces.com/problemset/problem/734/A

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = count(s.begin(),s.end(),'A');
    int d = count(s.begin(),s.end(),'D');
    if(a > d)
        cout << "Anton";
    else if(d > a)
        cout << "Danik";
    else
        cout << "Friendship";
}