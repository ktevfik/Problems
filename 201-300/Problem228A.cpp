#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    vector<int> y{a,b,c,d};
    int count = 0;
    for(int i = 0;i < 4;i++) {
        for(int j = 0;j < 4;j++) {
            if(y[i] == y[j] && i != j && i < j) {
                count++;
                break;
            }
        }
    }
    cout << count;
}