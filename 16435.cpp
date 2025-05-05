#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(null); cout.tie(null);

int main(){
	fastio; 
	int n; cin >> n; 
	int h; cin >> h; 
	vector<int> v; 
	for(int i=0; i<n; i++) {
		int a; cin >> a; 
		v.push_back(a); 
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < n; i++){
		if(v[i] <= h) h++; 
		else break;
	}
	cout << h << '\n'; 
}
