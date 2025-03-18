#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
	fastio; 
	int n, x, k; cin >> n >> x >> k; 
	vector<int> v(n);
	iota(v.begin(), v.end(), 1);
	while(k--){
		int a, b; cin >> a >> b;
		swap(v[a-1], v[b-1]);
	}
	for(int i = 0; i < n; i++){
		if(v[i] == x){
			cout << i+1 << '\n';
			break;
		}
	}
}
