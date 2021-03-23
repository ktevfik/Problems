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
    int t,y;
    cin >> t >> y;
    int c = 1;
    int s = 3;
    for(int i = 0;i < t;i++) {
        for(int j = 0;j < y;j++) {
            if(i % 2 == 0) {
                cout << "#";
            }
            else {
                if(i == c) {
                    if(j == y-1) {
                        cout << "#";
                        c+=4;
                    }
                    else cout << ".";
                }
                if(i == s) {
                    if(j == 0) {
                        cout << "#";
                    }
                    else cout << ".";
                    if(j == y-1) s+=4;
                }
            }
        }
        cout << endl;
    }
}