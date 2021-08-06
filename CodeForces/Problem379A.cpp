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
    int a,b;
    cin >> a >> b;
    int sum = a;
    int ps = 0;
    int kr = 0;
    while(a > 0) {
        sum+=a/b;
        ps+= a % b;
        a/=b;
    }
    while(ps > 0) {
        sum+= ps / b;
        kr+= ps % b;
        ps/=b;
    }
    int tr = 0;
    while(kr > 0) {
        sum += kr /b;
        tr+= kr % b;
        kr /=b;
    }
    while(tr > 0) {
        sum+= tr / b;
        tr /= b;
    }
    cout << sum;
}