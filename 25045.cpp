#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
using ll = long long; 

int main(){
	fastio; 
	int n, m; cin >> n >> m; 
	vector<ll> a, b; 
	for(int i = 0; i < n; i++){
		ll x; cin >> x;
		a.push_back(x);
	}
	for(int j = 0; j < m; j++){
		ll x; cin >> x;
		b.push_back(x); 
	}
	ll ans = 0; 
	sort(a.rbegin(), a.rend()); 
	sort(b.begin(), b.end()); 
	for(int i = 0; i < min(n, m); i++){
		if(a[i] > b[i]) ans += a[i] - b[i];
		else break; 
	}
	cout << ans << '\n'; 
}
