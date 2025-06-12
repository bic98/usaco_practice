#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
	int n; cin >> n;
	vector<int> v; 
	for(int i = 0; i < n; i++){
		int x; cin >> x; 
		v.push_back(x); 
	}
	sort(v.begin(), v.end()); 
	int m; cin >> m; 
	for(int i = 0; i < m; i++){
		int x; cin >> x; 
		auto it = lower_bound(v.begin(), v.end(), x); 
		if(it != v.end() && *it == x){
			cout << 1 << "\n"; 
		}else{
			cout << 0 << "\n"; 
		}
	}

}

int main() {
	fastio; 
	int t; cin >> t; 
	while(t--){
		solve(); 
	}
}
