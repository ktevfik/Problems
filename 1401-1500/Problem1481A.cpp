/*
 __  __   _____    ___   __   __    ___    ___    _  __  
|  \/  | |_   _|  | __|  \ \ / /   | __|  |_ _|  | |/ /  
| |\/| |   | |    | _|    \ V /    | _|    | |   | ' <   
|_|__|_|  _|_|_   |___|   _\_/_   _|_|_   |___|  |_|\_\  
_|"""""|_|"""""|_|"""""|_| """"|_| """ |_|"""""|_|"""""| 
"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-' 

*/

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <list>

#define all(x) x.begin(),x.end()
#define pb push_back

typedef long long int ll;

using namespace std;

void run_case() {
    int a,b;
    cin >> a >> b;
    string s;
    cin >> s;
    int startx = 0,starty = 0;
    int reachx = 0,reachy = 0;
    for(int i = 0;i < s.length();i++) {
        if(s[i] == 'U') {
            if(reachy == 0 && starty < b) starty++;
            if(starty == b) reachy++;
        }
        else if(s[i] == 'D') {
            if(reachy == 0 && starty > b) starty--;
            if(starty == b) reachy++;
        }
        else if(s[i] == 'R') {
            if(reachx == 0 && startx < a) startx++;
            if(startx == a) reachx++;

        }
        else if(s[i] == 'L') {
            if(reachx == 0 && startx > a) startx--;
            if(startx == a) reachx++;
        }
    }
    ((startx == a && starty == b) ? cout << "YES\n" : cout << "NO\n");
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tests;
    cin >> tests;
    while(tests != 0) {
        run_case();
        tests--;
    }
}