#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


int main(){
	fastio; 
	string a, b; 
	cin >> a >> b;
	string s = ""; 
	for(int i = 0; i < a.size(); i++){
		if(isdigit(a[i])) continue;
		s += a[i];
	}
	int n = b.size(); 
	for(int i = 0; i < a.size() - b.size() + 1; i++){
		if(s.substr(i, n) == b){
			cout << 1 << '\n';
			return 0;
		}
	}
	cout << 0 << '\n'; 
}
