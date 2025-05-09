#include<bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define compress(v) sort(all(v)), (v).erase(unique(all(v)), (v).end())
#define IDX(I, x) (lower_bound(all(I), x) - I.begin())
#define fastio cin.tie(nullptr) -> sync_with_stdio(false)
#define vi(v) for(auto & z : (v)) cin >> z
#define vi1(v) for(int z = 1; z <= n; z++) cin >> v[z];
#define no() cout << "NO" << '\n';
#define yes() cout << "YES" << '\n';
#define show(v) for(const auto& z : v) {cout << z << ' '; } cout << '\n';
using namespace std;
using pii = pair<int, int>;
using tii = tuple<int, int, int>;
using ll = long long;
using pll = pair<ll, ll>;

int main(){
	fastio;
	int rem, tot, lastDay;
	int n, t; cin >> n >> t;
	rem = 0, tot = 0, lastDay = 0; 
	vector<pii> v; 
	for(int i = 0; i < n; i++){
		int d, b; cin >> d >> b;
		v.push_back({d, b});
	}
	v.push_back({t + 1, 0});
	for(int i = 0; i < n + 1; i++){
		int d = v[i].first, b = v[i].second;
		tot += b; 
		rem -= d - lastDay;
		lastDay = d;
		rem = max(0, rem) + b; 
	}
	cout << tot - rem << '\n'; 
}
