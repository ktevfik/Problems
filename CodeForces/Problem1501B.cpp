#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    int a[n];
    int x[n];
    int temp = 0;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        x[i] = 0;
    }
    for(int i = n-1;i>= 0;i--) {
        if(a[i] > temp) {
            temp = a[i];
        }
        if(temp > 0) {
            x[i]++;
            temp--;
        }
    }
    for(int i = 0;i < n;i++) cout << x[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    while(n != 0) {
        run_case();
        n--;
    }
}