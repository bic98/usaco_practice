#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
	int n; cin >> n;
	int sq = sqrt(n); 
	if(sq * sq == n){
		cout << 1 << '\n'; 
	}else{
		cout << 0 << '\n'; 
	}

}


int main(){
	fastio; 
	int t; cin >> t; 
	while(t--){
		solve(); 
	}
}
