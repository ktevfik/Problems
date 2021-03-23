/*
 __  __   _____    ___   __   __    ___    ___    _  __  
|  \/  | |_   _|  | __|  \ \ / /   | __|  |_ _|  | |/ /  
| |\/| |   | |    | _|    \ V /    | _|    | |   | ' <   
|_|__|_|  _|_|_   |___|   _\_/_   _|_|_   |___|  |_|\_\  
_|"""""|_|"""""|_|"""""|_| """"|_| """ |_|"""""|_|"""""| 
"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-' 

*/

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <list>

typedef long long int ll;

#define all(x) x.begin(),x.end()
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define vc vector<char>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    char a[n][n];
    vc b;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            cin >> a[i][j];
            b.pb(a[i][j]);
        }
    }
    sort(all(b));
    int cts = 1;
    for(int i = 0;i < b.size()-1;i++) {
        if(b[i] != b[i+1]) cts++;
    }
    bool flag = true;
    for(int i = 0;i < n-1;i++) {
        if(a[i][i] != a[i+1][i+1]) {
            flag = false;
        }
    }
    int l = 0;
    for(int i = n-1;i >= 1;i--) {
        if(a[l][i] != a[l+1][i-1]) {
            flag = false;
        }
        l++;
    }
    if(flag == false) cout << "NO" << endl;
    else if(flag && cts == 2 && count(all(b),a[0][0]) == n*2 - 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}