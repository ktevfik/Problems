#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <cmath>

#define all(x) x.begin(),x.end()
#define pb push_back

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0;i < n;i++) {
        int t,y;
        cin >> t >> y;
        if(t == y) {
            ans.pb(0);
        }
        else if(y > t) {
            int k = y-t;
            int c1 = k;
            k = k/10;
            if(c1 % 10 != 0) k++;
            ans.pb(k);
        }
        else if(t > y) {
            int c = t-y;
            int c2= c;
            c = c/10;
            if(c2 % 10 != 0) c++;
            ans.pb(c);
        }
    }
    for(int i : ans) cout << i << endl;
}