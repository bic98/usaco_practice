#include<bits/stdc++.h>
#define fastio cin.tie(nullptr) -> sync_with_stdio(false)
using namespace std;


int main(){
	fastio; 
	int n, k; cin >> n >> k; 
	vector<int> m, p; 
	for(int i = 0; i < n; i++){
		int a; cin >> a; 
		if(a < 0) m.push_back(abs(a)); 
		else p.push_back(a); 
	}

	sort(p.rbegin(), p.rend()); 
	sort(m.rbegin(), m.rend()); 

	int ans = 0; 
	int mx = 0; 
	for(int i = 0; i < p.size(); i += k){
		ans += p[i] * 2; 
		mx = max(mx, p[0]);
	}

	for(int i = 0; i < m.size(); i += k){
		ans += m[i] * 2;  
		mx = max(mx, m[0]);
	}
	ans -= mx;
	cout << ans << '\n';
}
