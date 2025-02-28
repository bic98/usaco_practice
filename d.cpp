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
	int n, k; cin >> n >> k; 
	vector<ll> v(n); 
	for(int i = 0; i < n; i++){
		cin >> v[i]; 
	}
	int ans = k + 1; 
	for(int i = 1; i < n; i++){
		ans += (v[i] - v[i - 1], k + 1); 
	}
	cout << ans << '\n'; 

}
