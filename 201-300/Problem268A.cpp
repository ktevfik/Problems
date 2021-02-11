#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <math.h>

#define all(x) x.begin(),x.end()
#define pb push_back

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h;
    vector<int> g;
    for(int i = 0;i < n;i++) {
        int t,y;
        cin >> t >> y;
        h.pb(t);
        g.pb(y);
    }
    int count = 0;
    for(int i = 0;i < h.size();i++) {
        for(int j = 0;j < g.size();j++) {
            if(h[i] == g[j] && i!=j) {
                count++;
            }
        }
    }
    cout << count;
}