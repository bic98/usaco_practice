#include <bits/stdc++.h>
using namespace std; 
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long; 

const int mod = (int)1e9 + 7; 
ll dp[1 << 17], mul[1 << 17]; 

int main(){
	fastio; 
	int n; cin >> n;
	mul[1] = 1; 
	for(int i = 2; i <= n; i++){
		mul[i] = mul[i - 1] * i; 
		mul[i] %= mod; 
	}
	dp[2] = 1; 
	for(int i = 3; i <= n; i++){
		dp[i] = dp[i - 2] * (i - 1) + dp[i - 1] * (i - 1); 
		dp[i] %= mod;  
	}
	ll ans = dp[n] * mul[n] % mod; 
	cout << ans << '\n'; 
}
