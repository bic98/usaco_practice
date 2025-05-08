#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	fastio; 
	int n, m; cin >> n >> m; 
	vector<int> k(m); 
	for(auto& i : k) cin >> i; 
	int ans = 0; 
	for(int i = 1; i <= n; i++){
		for(const auto& j : k){
			if(i % j == 0){
				ans += i; 
				break; 
			}
		}
	}
	cout << ans << '\n'; 
}
