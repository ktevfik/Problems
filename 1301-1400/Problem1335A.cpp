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
    vector<int> ans;
    for(int i = 0;i < n;i++) {
        int y;
        cin >> y;
        if(y % 2 == 0) {
            ans.pb(y/2-1);
        }
        else {
            ans.pb(y/2);
        }
    }
    for(int i:ans) cout << i << endl;
}