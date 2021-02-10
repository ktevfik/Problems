#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <math.h>

#define all(x) x.begin(),x.end()

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0;i < n;i++) {
        int t,y;
        cin >> t >> y;
        int count = 0;
        if(t % y == 0) ans.push_back(count);
        else if(t < y) {
            count = y-t;
            ans.push_back(count);
        }
        else if(t>y){
            count = t+((ceil(t/y)+1)*y)-2*t;
            ans.push_back(count);
        }
    }
    for(int i : ans) {
        cout << i << endl;
    }
}