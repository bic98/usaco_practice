#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int sz[30031], candy[30031], par[30031], cnt[30031]; 

void find(int now){
	if(par[now] == now) return; 
	find(par[now]); 
	par[now] = par[par[now]]; 
}

int main(){
	fastio; 
	int n, m, k; cin >> n >> m >> k; 
	for(int i = 1; i <= n; i++){
		cin >> candy[i]; 
	}
	iota(par, par + n + 1, 0); 
	fill(sz, sz + n + 1, 1); 
	for(int i = 0; i < m; i++){
		int a, b; cin >> a >> b; 
		find(a); 
		find(b); 
		if(par[a] == par[b]) continue; 
		sz[par[a]] += sz[par[b]]; 
		candy[par[a]] += candy[par[b]]; 
		par[par[b]] = par[a]; 
	}
	vector<int> v, w; 
	for(int i = 1; i <= n; i++){
		find(i); 
		if(par[i] == i){
			v.push_back(sz[i]); 
			w.push_back(candy[i]); 
		}
	}
	int g = v.size(); 
	vector<int> dp(k + 1, -1); 
	dp[0] = 0; 
	for(int i = 0; i < g; i++){
		for(int j = k - 1; j >= v[i]; j--){
			if(j - v[i] < 0) continue; 
			if(dp[j - v[i]] != -1){
				dp[j] = max(dp[j], dp[j - v[i]] + w[i]); 
			}
		}
	}
	int ans = 0; 
	for(int i = 0; i < k; i++){
		if(dp[i] == -1) continue; 
		ans = max(ans, dp[i]); 
	}
	cout << ans << '\n'; 
}
