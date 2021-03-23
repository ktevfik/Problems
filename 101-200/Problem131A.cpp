/*
 __  __   _____    ___   __   __    ___    ___    _  __  
|  \/  | |_   _|  | __|  \ \ / /   | __|  |_ _|  | |/ /  
| |\/| |   | |    | _|    \ V /    | _|    | |   | ' <   
|_|__|_|  _|_|_   |___|   _\_/_   _|_|_   |___|  |_|\_\  
_|"""""|_|"""""|_|"""""|_| """"|_| """ |_|"""""|_|"""""| 
"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-' 

*/

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <list>

typedef long long int ll;

#define all(x) x.begin(),x.end()
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define vc vector<char>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int c = 0,d = 0;
    string s;
    cin >> s;
    for(int i = 1; i < s.size(); i++){
        if(islower(s[i])){
            c++;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i])){
            d++;
        }
    }
    if(islower(s[0]) && c==0){
        s[0] = toupper(s[0]);
        for(int i = 1; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
        cout << s;
        return 0;
    }
    if(d==s.size()){
        for(int i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }
        cout<<s;
    }
    else{
        cout<<s;
    }
}