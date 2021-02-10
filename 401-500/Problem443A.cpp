#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

#define all(x) x.begin(),x.end()

using namespace std;

int main() {
    string s;
    getline(cin,s);
    vector<char> l;
    for(int i = 0;i < s.length();i++) {
        s[i] = tolower(s[i]);
        if(s[i] >= 97 && s[i] <= 122) {
            l.push_back(s[i]);
        }
    }
    if(l.size() == 0) {
        int y = 0;
        cout << y;
        return 0;
    }
    vector<char> ans;
    ans.push_back(l[0]);
    for(int i = 0;i < l.size();i++) {
        for(int j = 0; j < l.size();j++) {
            if(l[i] == l[j]) {
                if(count(all(ans),l[i]) == 0) {
                    ans.push_back(l[i]);
                }
            }
        }
    }
    cout << ans.size();
}