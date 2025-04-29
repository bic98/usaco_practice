#include<bits/stdc++.h>
using namespace std; 
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long; 
using pll = pair<ll, ll>; 
vector<pll> v; 

bool check(pll a, pll b, pll c){
	ll x1 = a.first, y1 = a.second; 
	ll x2 = b.first, y2 = b.second; 
	ll x3 = c.first, y3 = c.second; 
	ll d1 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); 
	ll d2 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2); 
	ll d3 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3); 
	return (d1 + d2 == d3) || (d1 + d3 == d2) || (d2 + d3 == d1); 
}

int main(){
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		ll a, b; cin >> a >> b; 
		v.push_back({a, b}); 
	}
	int ans = 0; 
	for(int i = 0; i < n - 2; i++){
		for(int j = i + 1; j < n - 1; j++){
			for(int k = j + 1; k < n; k++){
				if(check(v[i], v[j], v[k])){
					ans++;
				}
			}
		}
	}
	cout << ans << '\n'; 
}
