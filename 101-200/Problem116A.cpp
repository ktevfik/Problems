// PROBLEM = https://codeforces.com/problemset/problem/116/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a ,t,y,sum = 0;
    cin >> a;
    vector<int> sums;
    for(int i = 0;i < a;i++) {
        cin >> t >> y;
        sum = sum + y - t;
        sums.push_back(sum);
    }
    sort(sums.begin(),sums.end(),greater<int>());
    cout << sums[0];
}