#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
	int n; cin >> n; 
	string s; cin >> s; 
	vector<int> al(26); 
	for(int i = 0; i < n; i++){
		al[s[i] - 'a']++;
	}
	bool ok = false; 
	for(int i = 1; i < n - 1; i++){
		int cnt = al[s[i] - 'a']; 
		if(cnt > 1){
			ok = true; 
			break; 
		}
	}
	if(ok){
		cout << "YES" << '\n'; 
	}else{
		cout << "NO" << '\n'; 
	}
	
}

int main(){
	fastio; 
	int t; cin >> t; 
	while(t--){
		solve(); 
	}
}
