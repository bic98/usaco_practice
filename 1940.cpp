#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	fastio; 
	int n, m; 
	cin >> n >> m;
	vector<int> v(n); 
	for(auto& i : v) cin >> i; 
	sort(v.begin(), v.end()); 
	int l = 0, r = n - 1, ans = 0; 
	while(l < r){
		if(v[l] + v[r] == m){
			ans++; 
			l++; 
			r--; 
		}else if(v[l] + v[r] < m){
			l++;
		}else{
			r--;
		}
	}
	cout << ans << '\n'; 
}
