#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <cmath>

#define all(x) x.begin(),x.end()
#define pb push_back

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b){
        swap(a,b); 
    }
    cout<<a<<" "<<(b-a)/2<<endl;
    return 0;
}