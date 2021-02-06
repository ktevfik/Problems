// PROBLEM = https://codeforces.com/problemset/problem/158/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> part;
    for(int i = 0;i < n;i++) {
        int p = 0;
        cin >> p;
        part.push_back(p);
    }
    int pno = part[k-1];
    int count = 0;
    for(int i = 0;i < n;i++) {
        if(part[i] >= pno && part[i] > 0) {
            count++;
        }
    }
    cout << count;
}