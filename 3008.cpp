#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
using pll = pair<ll, ll>;

vector<pll> arr; 

struct pair_hash {
    size_t operator()(const pll& p) const {
        return hash<ll>()(p.first) ^ (hash<ll>()(p.second) << 1);
    }
};

int main(){
    fastio;
	int n; cin >> n; 
	for(int i = 0; i < n; i++){
		ll x, y; cin >> x >> y; 
		arr.push_back({x, y}); 
	}
	ll ans = 0; 
	for(int i = 0; i < n; i++){
		unordered_map<pll, int, pair_hash> M; 
		for(int j = 0; j < n; j++){
			if(i == j) continue; 
			ll x = arr[j].first - arr[i].first;
			ll y = arr[j].second - arr[i].second;
			ll g = gcd(abs(x), abs(y));
			x /= g; y /= g;
			M[{x, y}]++;
		}
		for(const auto& [d, cnt] : M){
			auto [dx, dy] = d; 
			int p = 0;
			if (M.count({-dy, dx})) p += M[{-dy, dx}];
			if (M.count({dy, -dx})) p += M[{dy, -dx}];
			ans += (ll)p * (ll)cnt;
		}
	}
	cout << ans / 2 << '\n'; 
}

