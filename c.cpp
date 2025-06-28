#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void solve(){
	int r, c; cin >> r >> c; 
	vector<vector<int>> v(r, vector<int>(c)); 
	vector<int> R, C; 
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> v[i][j]; 
		}
	}
	for(int i = 0; i < r; i++){
		int mx = 0; 
		for(int j = 0; j < c; j++){
			mx = max(mx, v[i][j]); 
		}
		R.push_back(mx); 
	}
	for(int i = 0; i < c; i++){
		int mx = 0; 
		for(int j = 0; j < r; j++){
			mx = max(v[j][i], mx); 
		}
		C.push_back(mx); 
	}
	int mx = 0; 

}

int main(){
	fastio; 
	int t; cin >> t; 
	while(t--){
		solve(); 
	}
}
