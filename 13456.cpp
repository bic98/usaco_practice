#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
	int n; cin >> n;
	int ans = 0; 
	vector<int> v; 
	for(int i = 0; i < n; i++){
		int a; cin >> a; 
		v.push_back(a); 
	}
	for(int i = 0; i < n; i++){
		int a; cin >> a; 
		if(v[i] != a) ans++; 
	}
	cout << ans << "\n"; 
}


int main(){
	fastio; 
	int t; cin >> t; 
	while(t--){
		solve(); 
	}
}
