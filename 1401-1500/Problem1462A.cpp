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
    int a;
    cin >> a;
    
    int tek[500];
    int cift[500];
    int as=0 ,bs= 0;
    if(a % 2 == 1) {
        as = 0;
        bs = a-2;
    }
    else {
        as = 0;
        bs= a-1;
    }
    for(int i = 0;i < a;i++) {
        int t;
        cin >> t;
        if(a % 2 == 1) {
            if((a / 2) + 1 > i) {
                tek[as] = t;
                as+=2;
            }
            else {
                tek[bs] = t;
                bs-=2;
            }
        }
        else {
            if((a / 2) > i) {
                tek[as] = t;
                as+=2;
            }
            else {
                tek[bs] = t;
                bs-=2;
            }
        }
    }
    for(int i = 0;i < a;i++) {
        cout << tek[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tests;
    cin  >> tests;
    while(tests != 0) {
        run_case();
        tests--;
    }
}