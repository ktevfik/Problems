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

void run_case() {
    ll a,b,c;
    cin >> a >> b >> c;
    ll sum = a + b + c;
    if(sum % 9 != 0) {
        cout << "NO" << endl;
    }
    else {
        int op = sum / 9;
        if(a >= op && b >= op && c >= op) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tests;
    cin >> tests;
    while(tests != 0) {
        run_case();
        tests--;
    }
}