#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void solve(){
	int r, c; cin >> r >> c; 
	vector<vector<int>> v(r, vector<int>(c)); 
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> v[i][j]; 
		}
	}
	auto cntElem = [&](vector<int> tmp, int k) -> int{
		int t = 0; 
		for(auto i : tmp){
			if(i == k) t++; 
		}
		return t; 
	}; 
	int mx_r = 0, id_r = -1, cnt_r = 0; 
	for(int i = 0; i < r; i++){
		int mx = 0; 
		for(int j = 0; j < c; j++){
			mx = max(mx, v[i][j]); 
		}
		int cntNow = cntElem(v[i], mx); 
		if(mx_r < mx){
			mx_r = mx; 
			cnt_r = cntNow; 
			id_r = i;
		}else if(mx_r == mx){
			if(cnt_r < cntNow){
				id_r = i; 
				cnt_r = cntNow;
			}
		}
	}
	int mx_c = 0, id_c = -1, cnt_c = 0; 
	for(int i = 0; i < c; i++){
		int mx = 0; 
		vector<int> tmp; 
		for(int j = 0; j < r; j++){
			mx = max(v[j][i], mx); 
			tmp.push_back(v[j][i]); 
		}
		int cntNow = cntElem(tmp, mx); 
		if(mx_c < mx){
			mx_c = mx; 
			id_c = i; 
			cnt_c = cntNow; 
		}else if(mx_r == mx){
			if(cnt_c < cntNow){
				id_c = i; 
				cnt_c = cntNow;
			}
		}
	}
	for(int i = 0; i < c; i++){
		v[id_r][i]--; 
	}
	for(int i = 0; i < r; i++){
		if(i == id_r) continue;
		v[i][id_c]--; 
	}
	int ans = 0;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			ans = max(ans, v[i][j]); 
		}
	}
	cout << ans << '\n'; 
}

int main(){
	fastio; 
	int t; cin >> t; 
	while(t--){
		solve(); 
	}
}
