#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 1; i <= n;i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }
    int ans[150];
    for(int i = 0;i < n;i++) {
        ans[v[i]] = i+1; 
    }
    for(int i = 1;i <=n;i++) {
        cout << ans[i] << " ";
    }
}