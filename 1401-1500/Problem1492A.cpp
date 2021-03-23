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
    ll p,a,b,c;
    cin >> p >> a >> b >> c;
    ll x,y,z;
    if(p < a) x = a - p;
    else {
        ll op = ceil(double(p) / a);
        a*=op;
        x = a % p;
    }

    if(p < b) y = b - p;
    else {
        ll op = ceil(double(p) / b);
        b*=op;
        y = b % p;
    }
    if(p < c) z = c - p;
    else {
        ll op = ceil(double(p) / c);
        c*=op;
        z = c % p;
    }
    vll oops;
    oops.pb(x);
    oops.pb(y);
    oops.pb(z);
    cout << *min_element(all(oops)) << endl;
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