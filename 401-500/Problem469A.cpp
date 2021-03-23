#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0;i < 2;i++) {
        int y;
        cin >> y;
        int t[y];
        for(int i = 0;i < y;i++) {
            cin >> t[i];
            ans.push_back(t[i]);
        }
    }
    vector<int> gens;
    int count = 0;
    for(int i = 1;i <= n;i++) {
        for(int j = 0;j < ans.size();j++) {
            if(ans[j] == i) count++;
        }
        gens.push_back(count);
        count = 0;
    }
    sort(gens.begin(),gens.end());
    if(gens[0] == 0) cout << "Oh, my keyboard!";
    else cout << "I become the guy.";
}