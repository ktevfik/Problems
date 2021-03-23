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
    int s,n;
    cin >> s >> n;
    int hp[n];
    int bonus[n];
    for(int i = 0;i < n;i++) {
        cin >> hp[i] >> bonus[i];
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++) {
            if(hp[i] < hp[j]) {
                int tmp = hp[i];
                int tmp2 = bonus[i];
                hp[i] = hp[j];
                hp[j]=tmp;
                bonus[i] = bonus[j];
                bonus[j] = tmp2;
            }
        }
    }
    for(int i = 0;i < n;i++) {
        if(s > hp[i]) {
            s+=bonus[i];
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}