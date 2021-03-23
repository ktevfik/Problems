#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    long long a[n+1],b[n+1],tm[n+1];
    for(int i = 1;i <=n;i++) {
        cin >> a[i] >> b[i];
    }
    for(int i = 1;i <= n;i++) {
        cin >> tm[i];
    }
    b[0] = 0;
    long long r = 0,l = 0;
    for(int i = 1;i <= n;i++) {
        r = l + a[i]-b[i-1] + tm[i];
        l = max(b[i],r + ((b[i]-a[i]+1)/2));
    }
    cout << r << endl;
}

int main() {
    int n;
    cin >> n;
    while(n != 0) {
        run_case();
        n--;
    }
}