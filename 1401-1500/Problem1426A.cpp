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
    int a,b;
    cin >> a >> b;
    int F_floor = 2;
    int other_floor = b;
    int f_c = 1;
    if(a == 1) {
        cout << a << endl;
        return;
    }
    a = a-F_floor;

    if(a % b != 0) {
        f_c = ceil(float(a) / b) + 1;
    }
    else f_c = f_c + a / b;

    cout << f_c << endl;
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