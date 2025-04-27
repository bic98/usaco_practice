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
	int n; cin >> n; 
	while(n--){
		string s; cin >> s; 
		int m = s.size(); 
		int ans = 1e9; 
		for(int i = 1; i < m - 1; i++){
			if(s[i] == 'O'){
				int tmp = m - 3 + (s[i - 1] != 'M') + (s[i + 1] != 'O');
				ans = min(ans, tmp); 
			}
		}
		if(ans == 1e9){
			cout << -1 << '\n'; 
		}else{
			cout << ans << '\n'; 
		}

		
	}
}
