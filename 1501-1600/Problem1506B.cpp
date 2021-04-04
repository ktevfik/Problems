#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int counter = 0;
        int j_copy = 0,y_copy = 0,tt = 0;
        for(int j = 0;j < n;j++) {
            if(s[j] == '*') {s[j] = 'x';counter++;j_copy = j;break;}
        }
        for(int y = n-1;y >= 0;y--) {
            if(s[y] == '*') {s[y] = 'x';counter++;y_copy = y;break;}
        }
        tt = y_copy;
        int x_j = j_copy;
        int x_y = y_copy;
        while(x_j < y_copy) {
            if(x_j - j_copy == k && s[x_j] == '*') {s[x_j] = 'x';counter++;j_copy = x_j;}
            x_j++;
        }
        while(x_y >= 0) {
            if(s[x_y] == 'x') {y_copy = x_y;}
            if(y_copy - x_y == k && s[x_y] == '*') {s[x_y] = 'x';counter++;y_copy = x_y;}
            
            x_y--;
        }
        int control = 0;
        while(control < tt) {
            int key = 0;
            if(s[control] == 'x') {
                key = control;
                int x = k;
                int hold = 0;
                while(x > 0) {
                    if(s[key+x] != 'x') {
                        hold++;
                    }
                    x--;
                }
                if(hold == k) {
                    x = k;
                    while(x > 0) {
                        if(s[key+x] == '*') {
                            s[key+x] = 'x';
                            counter++;
                            break;
                        }
                        x--;
                    }
                }
            }
            control++;
        }
        cout << counter << endl; 
    }
}