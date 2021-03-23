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
    ll a;
    cin >> a;
    ll b = a;
    int sm = 0;
    if(a % 2 == 1 && a % a == 0 && a > 1) {
        cout << "YES" << endl;
        return;
    }
    while(b > 0) {
        sm+= b % 10;
        b/= 10;
    }
    if(sm % 3 == 0 || a % 5 == 0) {
        cout << "YES" << endl;
        return;
    }
    while(!(a % 2)) a/= 2;
    if(a > 1) cout << "YES" << endl;
    else cout << "NO" << endl;
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