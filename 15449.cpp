#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	fastio; 
	vector<int> v; 
	for(int i = 0; i < 5; i++){
		int a; cin >> a; 
		v.push_back(a); 
	}
	sort(v.begin(), v.end()); 
	int ans = 0; 
	for(int i = 0; i < (1 << 5); i++){
		vector<int> temp; 
		for(int j = 0; j < 5; j++){
			if((i >> j) & 1){
				temp.push_back(v[j]); 
			}
		}
		if(temp.size() == 3){
			if(temp[0] + temp[1] > temp[2]){
				ans++; 
			}
		}
	}
	cout << ans << '\n'; 

}
