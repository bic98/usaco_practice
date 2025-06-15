#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
	fastio; 
	int n, l; cin >> n >> l; 
	for(int i = l; i <= 100; i++){
		int sum = i * (i - 1) / 2;
		int rem = n - sum; 
		if(rem < 0){
			cout << -1 << '\n'; 
			return 0; 
		}
		if(rem % i == 0){
			for(int j = 0; j < i; j++){
				cout << rem / i + j << ' '; 
			}
			return 0; 
		}
	}
	cout << -1 << '\n'; 
}
