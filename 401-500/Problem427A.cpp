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
    vector<int> a;
    for(int i = 0;i < n;i++) {
        int t;
        cin >> t;
        a.pb(t);
    }
    int crime = 0,cops = 0;
    
    for(int i = 0;i < a.size();i++) {
        if(a[i] > 0) cops+=a[i];
        if(a[i] < 0 && cops == 0) {
            crime++;
        }
        if(a[i] < 0 && cops > 0) {
            cops--;
        }
    }
    cout << crime;
}