#include<bits/stdc++.h>
#define fastio cin.tie(nullptr) -> sync_with_stdio(false)
using namespace std;

int main(){
	fastio; 
	int n, m; 
	while(cin >> n >> m){
		if(n == 0 && m == 0) break;
		vector<int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i]; 
		}
		int ans = 0; 
		for(int i = 0; i < m; i++){
			int a; cin >> a; 
			auto it = lower_bound(v.begin(), v.end(), a);
			if(it != v.end() && *it == a){
				ans++; 
			}
		}
		cout << ans << '\n'; 
	}
}
