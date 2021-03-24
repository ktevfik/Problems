#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int,int> a;
    int b[n+1];
    for(int i = 0;i < n;i++) {
        int x = 0,y = 0;
        cin >> x >> y;
        a[x] = y;
        b[i] = x;
    }
    sort(b,b+n);
    for(int i = 0;i < n-1;i++) {
        if(b[i] < b[i+1] && a[b[i]] > a[b[i+1]]) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
}