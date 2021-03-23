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
    int c[a];
    for(int i = 0;i < a;i++) {
        cin >> c[i];
    }
    for(int i = 0;i < a;i++) {
        int y = b + 1;
        if(c[i] > b) {
            for(int j = 0;j < a;j++) {
                for(int t = 0;t < a;t++) {
                    if(j != t) {
                        y = c[j] + c[t];
                    }
                    if(y <= b) {
                        c[i] = y;
                        break;
                    }
                }
            }
        }
    }
    int k = 0;
    for(int i = 0;i < a;i++) {
        if(c[i] > b) {
            k++;
            break;
        }
    }
    if(k == 0) cout << "YES" << endl;
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