#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        if (i % 2 == 0) {
            cout << "I hate ";
        } else {
            cout << "I love ";
        }
        if (i != a - 1) {
            cout << "that ";
        } else {
            cout << "it ";
        }
    }
}