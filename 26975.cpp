#include<bits/stdc++.h>
#define fastio cin.tie(nullptr) -> sync_with_stdio(false)
using namespace std;
using ll = long long; 


int main(){
	fastio; 
	int n; cin >> n;
	vector<ll> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int ans = 0, id = 0; 
	for(int i = 0; i < n; i++){
		int val = v[i] * (n - i); 
		if(ans < val){
			ans = val; 
			id = i; 
		}
	}
	cout << ans << ' ' << v[id] << '\n'; 
}
