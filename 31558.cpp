#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);



void solve(){
	int n; cin >> n; 
	vector<int> v(n); 
	set<int> S; 
	for(auto& i : v) {
		cin >> i; 
	}
	vector<int> vis(n + 1, 0); 
	for(int i = 0; i < n; i++){
		if(i > 2) vis[v[i - 3]]--;
		vis[v[i]]++;
		if(vis[v[i]] >= 2) S.insert(v[i]);
	}
	if(S.size()){
		for(const auto& i : S){
			cout << i << ' '; 
		}
		cout << '\n'; 
	}
	else{
		cout << -1 << '\n'; 
	}
}


int main() {
	fastio; 
	int t; cin >> t; 
	while(t--){
		solve(); 
	}
}

