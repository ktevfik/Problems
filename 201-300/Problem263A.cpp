// PROBLEM = https://codeforces.com/problemset/problem/263/A

#include <iostream>

using namespace std;

int main() {
    int matrix[5][5];
    for(int i = 0;i < 5;i++) {
        for(int j = 0;j < 5;j++) {
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    int x =0,y = 0;
    for(int i = 0;i < 5;i++) {
        for(int j = 0;j < 5;j++) {
            if(matrix[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }
    int count = 0;
    while(x != 2) {
        if(x < 2) {
            x++;
            count++;
        }
        if(x > 2) {
            x--;
            count++;
        }
    }
    while(y != 2) {
        if(y < 2) {
            y++;
            count++;
        }
        if(y > 2) {
            y--;
            count++;
        }
    }

    cout << count;
}