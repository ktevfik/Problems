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
    vi a;
    for(int i = 0;i < n;i++) {
        int o;
        cin >> o;
        a.pb(o);
    }
    sort(all(a));
    vi tekrar_count;
    vi tekrar_sum;
    int s_cnt = 1;
    int s_sum = 0;
    int s_cort = 0;
    for(int i = 0;i < n-1;i++) {
        if(a[i] == a[i+1]) {
            s_cnt++;
            if(s_cort == 0) {
                s_sum+=a[i];
                s_cort++;
            }
            s_sum+=a[i];
            if(i == n-2 && s_cnt > 1) {
                if(s_cnt > 1) 
                    tekrar_count.pb(s_cnt);
                if(s_sum > 0)
                    tekrar_sum.pb(s_sum);
            }
        }
        else {
            if(s_cnt > 1) 
                tekrar_count.pb(s_cnt);
            if(s_sum > 0)
                tekrar_sum.pb(s_sum);
            s_cnt = 1;
            s_sum = 0;
            s_cort = 0;
        }
    }
    int max = 0;
    int pos = 0;
    for(int i = 0;i < tekrar_sum.size();i++) {
        if(tekrar_sum[i] > max) {
            max = tekrar_sum[i];
            pos = i;
        }
    }

    int ss = 0;
    for(int i = 0;i < a.size();i++) {
        if(a[i] != a[i+1]) {
            ss++;
        }
    }
    if(tekrar_count.size() == 0) {
        int l = 1;
        cout << l << " " << a.size();
    }
    else {
        cout << *max_element(all(tekrar_count)) << " " << ss << endl; 
    }
}