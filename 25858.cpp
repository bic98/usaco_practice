#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
	fastio;
	int n, d; cin >> n >> d; 
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	int sum = accumulate(a.begin(), a.end(), 0);
	for(int i = 0; i < n; i++){
		int k = d * a[i] / sum; 
		cout << k << '\n'; 
	}
}
