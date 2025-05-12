#include <bits/stdc++.h>
using namespace std;


int main(){
	string s; cin >> s; 
	int ans = 0; 
	for(int i = 0; i < s.size() - 1; i++){
		if(s[i + 1] == '0'){
			ans += 10; 
			continue; 
		}
		ans += s[i] - '0';
	}
	ans += s[s.size() - 1] - '0';
	cout << ans << '\n'; 
}
