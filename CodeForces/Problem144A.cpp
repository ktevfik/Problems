#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec;
    int pos[2];
    for(int i = 0;i < n;i++) {
        int y;
        cin >> y;
        vec.push_back(y);
    }
    int mx= 0,mn = 0;
    int max = vec[0],min=vec[0];
    for(int i = 0;i < vec.size();i++) {
        if(vec[i] > max) { 
            max = vec[i];
            mx = i;
        }
        if(vec[i] <= min) { 
            min = vec[i];
            mn = i;
        }
    }
    int c = 0;
    c = mx + (n- mn-1);
    if (mx > mn) {
        c--;
    }
    cout << c;
}