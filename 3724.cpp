#include<bits/stdc++.h>
#define fastio cin.tie(nullptr) -> sync_with_stdio(false)
using namespace std;
#define int int64_t

void solve(){
	int n, m; cin >> m >> n; 
	vector<vector<int>> v(n, vector<int>(m)); 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> v[i][j]; 
		}
	}
	int id = 0; 
	int mx = -1e18; 
	for(int i = 0; i < m; i++){
		int k = 1; 
		for(int j = 0; j < n; j++){
			k *= v[j][i]; 
		}
		if(k >= mx){
			mx = k; 
			id = i + 1; 
		}
	}
	cout << id << '\n'; 
}


int32_t main(){
	fastio; 
	int t; cin >> t;
	while(t--){
		solve(); 
	}
}
