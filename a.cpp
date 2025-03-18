#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using ll = long long;

void solve(){
	int n, x; cin >> n >> x;
	int mx = 0; 
	for(int i = 0; i < 31; i++){
		if((x >> i) & 1){
			mx += (1 << i);
		}else{
			break; 
		}
	}
	vector<int> a(n); 
	for(int i = 0; i < min(mx + 1, n); i++){
		a[i] = i;
	}
	int ans = 0; 
	for(int i = 0; i  < n; i++){
		ans = ans | a[i]; 
	}
	if(ans != x){
		a[n - 1] = x;
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << "\n"; 
}

int main(){
	fastio;
	int t; cin >>t ; 
	while(t--){
		solve(); 
	}
}
