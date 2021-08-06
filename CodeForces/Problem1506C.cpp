#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) {
        string a,b;
        cin >> a >> b;
        ll a_length = a.length();
        ll b_length = b.length();
        ll ans = 0;
        for(ll subSTR = 0;subSTR <= min(a_length,b_length);subSTR++) {
            for(int i = 0;i+subSTR <= a_length;i++) {
                for(int j = 0;j+subSTR <= b.length();j++) {
                    if(a.substr(i,subSTR) == b.substr(j,subSTR)) {
                        ans = max(subSTR,ans);
                    }
                }
            }
        }
        cout << max(a_length+b_length - 2*ans,0ll) << endl;
    }
}