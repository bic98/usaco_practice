#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
	fastio; 
	int p, n; cin >> p >> n;
	priority_queue<int, vector<int>, greater<int>> pq; 
	for(int i = 0; i < n; i++){
		int x; cin >> x; 
		pq.push(x); 
	}
	int ans = 0; 
	while(!pq.empty()){
		int t = pq.top(); 
		pq.pop(); 
		if(p < 200){
			ans++; 
			p += t; 
		}else{
			break; 
		}
	}
	cout << ans << '\n'; 
}
