#include <bits/stdc++.h>
#define fastio cin.tie(0) -> sync_with_stdio(0)
using namespace std;

int cnt[1000001];

int main(){
	fastio; 
	int n; cin >> n;
	vector<int> v, ans(n); 
	for(int i = 0; i < n; i++){
		int x; cin >> x; 
		cnt[x]++;
		v.push_back(x); 
	}
	for(int i = 0; i < n; i++){
		int x = v[i];
		ans[i] = -1; 
		int j = 1; 
		for(; j * j < x; j++){
			if(x % j == 0){
				ans[i] += cnt[j] + cnt[x / j];
			}
		}
		if(j * j == x){
			ans[i] += cnt[j];
		}

	}
	for(const auto& i : ans){
		cout << i << '\n'; 
	}

}
