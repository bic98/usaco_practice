#include<bits/stdc++.h>
using namespace std; 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
	int n, m; cin >> n >> m; 
	string l, r; cin >> l >> r; 
	int t; cin >> t; 
	reverse(l.begin(), l.end()); 
	string comb = l + r; 
	for(int i = 0; i < t; i++){
		for(int j = 0; j < comb.size() - 1; j++){
			if(l.find(comb[j]) != string::npos && r.find(comb[j + 1]) != string::npos){
				swap(comb[j], comb[j + 1]); 
				j++; 
			}
		}
	}
	cout << comb << '\n'; 
}
