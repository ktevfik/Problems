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
    vector<vector<int>> a;
    for(int i = 0;i < n;i++) {
        vi b;
        for(int j = 0;j < 3;j++) {
            int k;
            cin >> k;
            b.pb(k);
        }
        a.pb(b); 
    }
    
    for(int i = 0;i < 3;i++) {
        int sums = 0;
        for(int j = 0;j < n;j++) {
            sums += a[j][i];
        }
        if(sums != 0) {
            cout << "NO" << "\n";
            return 0;
        }
    }
    cout << "YES" << "\n";
}