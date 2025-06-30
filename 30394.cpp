#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
	fastio; 
	int n; cin >> n; 
	int mx = -2e9, mn = 2e9; 
	int x, y; 
	for(int i = 0; i < n; i++){
		cin >> x >> y; 
		mx = max(y, mx); 
		mn = min(y, mn); 
	}
	int ans = mx - mn; 
	cout << ans << '\n'; 
}
