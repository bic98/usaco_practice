#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
	fastio; 
	int n, m; cin >> n >> m; 
	vector<int> v(n); 
	for(int i = 0; i < n; i++){
		cin >> v[i]; 
	}
	int l = 0, ans = 0, prev = 0; 

	for(int r = 0; r < n; r++){
		prev += v[r]; 
		while(prev > m && l <= r){
			prev -= v[l]; 
			l++; 
		}
		if(prev == m){
			ans++; 
		}
	}

	cout << ans << '\n'; 
}
