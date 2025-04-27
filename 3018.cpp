#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	int n, m; cin >> n >> m; 
	int ans = 0; 
	for(int i = 0; i < m; i++){
		int w, l; cin >> w >> l; 
		ans += w * l; 
	}
	int k = (ans + n - 1) / n;
	cout << k << '\n'; 
}
