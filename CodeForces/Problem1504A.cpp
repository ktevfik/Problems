#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool isPalindrome(string s) {
    for(int i = 0;i < s.length()/2;i++)  {
        if(s[i] != s[s.length()-i-1]) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    string words[n];
    for(int i = 0;i < n;i++) {
        cin >> words[i];
        if(!isPalindrome(words[i] + 'a')) {
            words[i]+= 'a';
            cout << "YES\n" << words[i] << "\n";
        }
        else if(!isPalindrome('a' + words[i])) {
            string a = "a";
            a+=words[i];
            cout << "YES\n" << a << "\n";
        }
        else {
            cout << "NO\n";
        }
    }
}