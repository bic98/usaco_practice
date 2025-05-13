#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using pii = pair<int, int>; 

int main(){
	int n, m; cin >> n >> m; 
	set<int> S; 
	map<int, int> M, T; 
	for(int i = 0; i < m; i++){
		int a; cin >> a; 
		M[a]++; 
		if(S.count(a)) continue; 
		if(S.size() < n){
			S.insert(a); 
			T[a] = i; 
		}else{
			int id = -1, cnt = 1e9; 
			for(const auto& name : S){
				if(cnt > M[name]){
					cnt = M[name]; 
					id = name; 
				}else if(cnt == M[name]){
					if(T[id] > T[name]){
						id = name; 
					}
				}
			}
			S.erase(id); 
			M[id] = 0; 
			S.insert(a); 
			T[a] = i; 
		}
	}
	for(const auto& i : S){
		cout << i << ' '; 
	}cout << '\n'; 
}
