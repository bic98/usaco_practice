#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
	string s; cin >> s; 
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'S'){
			cout << s << '\n'; 
			return; 
		}
	}
}


int main(){
	fastio; 
	int t; cin >> t; 
	while(t--){
		solve(); 
	}
}
