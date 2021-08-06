#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <math.h>

#define all(x) x.begin(),x.end()
#define pb push_back

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s.length() < 26) {
        cout << "NO";
        return 0;
    }
    for(int i = 0;i < s.length();i++) {
        s[i] = tolower(s[i]);
    }
    sort(all(s));
    int c = 0;
    for(int i = 0;i < s.length()-1;i++) {
        if(s[i] != s[i+1]) c++;
    }
    if(c == 25) cout << "YES";
    else cout << "NO";
}