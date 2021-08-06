// PROBLEM = https://codeforces.com/problemset/problem/282/A

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> o;
    for(int i = 0;i < n;i++) {
        string operation;
        cin >> operation;
        o.push_back(operation);
    }
    int count = 0;
    for(int i = 0;i < n;i++) {
        if(o.at(i) == "++X") count++;
        else if(o.at(i) == "X++") count++;
        else if(o.at(i) == "--X") count--;
        else if(o.at(i) == "X--") count--;
    }
    cout << count;
}