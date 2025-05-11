#include<bits/stdc++.h>
#define fastio cin.tie(nullptr) -> sync_with_stdio(false)
using namespace std;


int main(){
	fastio; 
	int n; cin >> n; 
	string s; cin >> s; 
	for(int i = 0; i < n; i++){
		if(s[i] == '.' || s[i] == '|' || s[i] == ':' || s[i] == '#'){
			s[i] = ' '; 
		}
	}
	stringstream in(s);
	int ans = 0; 
	int a; 
	while(in >> a){
		ans += a;
	}
	cout << ans << '\n'; 
}
