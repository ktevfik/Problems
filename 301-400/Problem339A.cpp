// PROBLEM = https://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<char> numbers;
    vector<char> operators;
    string a;
    cin >> a;
    for(int i = 0;i < a.size();i++) {
        if(a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/' )
            operators.push_back(a[i]);
        else
            numbers.push_back(a[i]);
    }
    sort(numbers.begin(),numbers.end());
    for(int i = 0;i < numbers.size();i++) {
        if(i != numbers.size() -1 )
            cout << numbers[i] << operators[i];
        else
            cout << numbers[i];
    }
}