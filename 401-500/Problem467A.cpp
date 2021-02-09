#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0;i < n;i++) {
        int y,k;
        cin >> y >> k;
        if((k-y) >= 2) count++; 
    }
    cout << count;
}