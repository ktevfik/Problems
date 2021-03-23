#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<string> ans;
    for(int i = 0;i < n;i++) {
        string s;
        cin >> s;
        ans.push_back(s);
    }
    int count = 1;
    for(int i = 0;i < ans.size() - 1;i++) {
        if(ans[i] != ans[i+1]) {
            count++;
        }
    }
    cout << count;
}