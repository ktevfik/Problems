#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <cmath>

#define all(x) x.begin(),x.end()
#define pb push_back

using namespace std;

int main() {
    int n;
    cin >> n;
    int k[n][n];
    for(int i = 0;i < n;i++) {
        for(int j = 0; j < n ;j++) {
            k[i][j] = 1;
        }
    }
    for(int i = 1;i < n;i++) {
        for(int j = 1;j < n;j++) {
            k[i][j] = k[i-1][j] + k[i][j-1];
        }
    }
    cout << k[n-1][n-1];

}