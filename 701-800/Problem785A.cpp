#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <math.h>

#define all(x) x.begin(),x.end()
#define pb push_back

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0;i < n;i++) {
        string s;
        cin >> s;
        if(s == "Tetrahedron") sum+=4;
        else if(s == "Cube") sum+=6;
        else if(s == "Octahedron") sum+=8;
        else if(s == "Dodecahedron") sum+=12;
        else if(s =="Icosahedron") sum+=20;
    }
    cout << sum;
}