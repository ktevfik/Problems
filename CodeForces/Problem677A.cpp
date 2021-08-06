#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    int n,h;
    cin >> n >> h;
    int count = 0;
    for(int i = 0;i < n;i++) {
        int k;
        cin >> k;
        if(k <= h) count++;
        else count+=2;
    }
    cout << count;
}