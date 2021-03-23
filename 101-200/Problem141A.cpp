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
    string a,b,c;
    cin >> a >> b >> c;
    sort(all(a));
    sort(all(b));
    sort(all(c));
    string y="";
    y+=a;
    y+=b;
    sort(all(y));
    if(y == c) cout << "YES";
    else cout << "NO";
}