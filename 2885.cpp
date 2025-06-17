#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){
	fastio; 
	int k; cin >> k; 
	int lsb = k & -k;
	if(k == lsb) {
		cout << k << ' ' << 0 << '\n'; 
		return 0;
	}
	int hi = std::log2(k) + 1; 
	int lo = __builtin_ctz(k);
	cout << (1 << hi) << ' ' << hi - lo << "\n"; 

}
