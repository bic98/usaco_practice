#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)


int main(){
	fastio; 
	int n; cin >> n;
	priority_queue<int, vector<int>, greater<>> PQ; 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int a; cin >> a; 
			if(PQ.empty()){
				PQ.push(a); 
				continue; 
			}
			int top = PQ.top(); 
			if(a > top){
				PQ.push(a); 
			}
			if(PQ.size() > n) PQ.pop(); 
		}
	}
	int ans = PQ.top(); 
	cout << ans << '\n'; 
}
