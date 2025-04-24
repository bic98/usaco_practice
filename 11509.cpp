#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	fastio; 
	int n; cin >> n; 
	vector<int> v(n); 
	for(auto& i : v) cin >> i; 
	map<int, int> M; 
	for(int i = 0; i < n; i++){
		if(M[v[i] + 1] > 0){
			M[v[i] + 1]--;
		}
		M[v[i]]++; 
	}
	int ans = 0; 
	for(auto& i : M){
		if(i.second > 0){
			ans += i.second; 
		}
	}
	cout << ans << '\n'; 
}
