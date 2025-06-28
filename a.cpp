#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
	int n, s; cin >> n >> s; 
	vector<int> v(n); 
	for(int i = 0; i < n; i++){
		cin >> v[i]; 
	}
	int l = abs(s - v[0]) + v[n - 1] - v[0];
	int r = abs(v[n - 1] - s) + v[n - 1] - v[0];
	cout << min(l, r) << '\n';
}

int main(){
	fastio; 
	int t; cin >> t; 
	while(t--){
		solve(); 
	}
}
