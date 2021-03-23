#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    vector<int> y{k,l,m,n};
    int count = 0;
    for(int i = 1;i <= d;i++) {
        for(int j = 0;j < y.size();j++) {
            if(i % y[j] == 0) {
                count++;
                break;
            }
        }
    }
    cout << count;
}