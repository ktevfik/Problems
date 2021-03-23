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
    int count = 0;
    while(n!=0) {
        if(n >= 100) {
            n-=100;
            count++;
        }
        else if(n >= 20) {
            n-=20;
            count++;
        }
        else if(n >= 10) {
            n-=10;
            count++;
        }
        else if(n >= 5) {
            n-=5;
            count++;
        }
        else if(n >= 1) {
            n-=1;
            count++;
        }
    }
    cout << count;
}