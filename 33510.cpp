#include<bits/stdc++.h>
#define fastio cin.tie(nullptr) -> sync_with_stdio(false)
using namespace std;

int main(){
	int n; cin >> n;
	string s; cin >> s; 
	int rem = 0; 
	reverse(s.begin(), s.end());
	int ans = 0; 
	for(int i = 0; i < n - 1; i++){
		int c = s[i] - '0' + rem;
		if(c == 0){
			rem = 0; 
		}else if(c == 1){
			ans++; 
			rem = 1; 
		}else if(c == 2){
			rem = 1;
		}
	}
	cout << ans << '\n'; 
}
