#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <cmath>

#define all(x) x.begin(),x.end()
#define pb push_back

using namespace std;

void run_case() {
    int A,B;
    cin >> A >> B;
    int max_l = 1e9;
    for(int i = 0;i <= 20;i++) {
        if(B > 1) {
            int ops = i;
            int a = A;
            while(a > 0) {
                a /= B;
                ops++;
            }
            max_l = min(max_l,ops);
        }
        B++;
    }
    cout << max_l << endl;
}

int main() {
    int tests;
    cin >> tests;
    while(tests != 0) {
        run_case();
        tests--;
    }
}