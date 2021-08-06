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
    if (n % 2 == 0) {
        cout << n - 4 << " 4";
    } else {
        cout << n - 9 << " 9";
    }
}