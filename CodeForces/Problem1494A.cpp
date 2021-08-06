#include <bits/stdc++.h>

using namespace std;
 
int main(){
    int t;
	cin>> t;
	while(t--){
		string s;
		cin>> s;
		bool q = 0;
		for(int mask = 0; mask < (1 << 4); mask++){
			int ans = 0;
			for(int i = 0; i < s.size(); i++){
				if(s[i] == 'A'){
					if((mask & (1 << 1)) > 0)ans++;
					else ans--;
				}
				if(s[i] == 'B'){
					if((mask & (1 << 2)) > 0)ans++;
					else ans--;
				}
				if(s[i] == 'C'){
					if((mask & (1 << 3)) > 0)ans++;
					else ans--;
				}
				if(ans < 0)break;
			}
			if(ans == 0){
				cout<< "YES"<< endl;
				q = 1;
				break;
			}
		}
		if(q == 0){
			cout<< "NO"<< endl;
		}
	}
}