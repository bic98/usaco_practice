#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)


int main(){
	fastio; 
	int n; cin >> n; 
	vector<int> v; 
	for(int i = 0; i < n; i++){
		int x; cin >> x; 
		v.push_back(x); 
	}
	int l = 0, r = n - 1, mx = 2e9 + 1, L = 0, R = 0; 

	while(l < r){
		int val = abs(v[l] + v[r]); 
		if(val <= mx){
			mx = val; 
			L = v[l];
			R = v[r];
		}
		if(v[l] + v[r] < 0) l++;
		else r--;
	}
	cout << L << ' ' << R << '\n';
}
