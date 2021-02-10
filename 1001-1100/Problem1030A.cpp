#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> ans;
    for(int i = 0;i < a;i++) {
        int y;
        cin >> y;
        ans.push_back(y);
    }
    for(int i = 0;i < ans.size();i++) {
        if(ans[i] == 1) {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
}