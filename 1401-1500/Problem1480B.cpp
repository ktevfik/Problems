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

#define all(x) x.begin(),x.end()
#define pb push_back

using namespace std;

typedef long long int ll;

void run_case() {
    ll atc, he, en, sum = 0;
    cin >> atc >> he >> en;
    vector<ll> en_atc(en), en_he(en);
    for(int i = 0 ; i < en ; i++) {
        cin >> en_atc[i];   
    }
    for(int i = 0 ; i < en ; i++) {
        cin >> en_he[i];
        ll temp = (en_he[i] + atc - 1) / atc;
        sum += temp * en_atc[i];   
    } 
    for(int i = 0 ; i < en ; i++) {
        if(he > sum - en_atc[i]) {
            cout << "YES\n";
            return;
        }   
    }
    cout << "NO\n";
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