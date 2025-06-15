#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
	fastio; 
	int n; cin >> n; 
	int a, b; 
	a = b = 100; 
	for(int i = 0; i < n; i++){
		int x, y; cin >> x >> y; 
		if(x > y){
			b -= x; 
		}else if(x < y){
			a -= y; 
		}
	}
	cout << a << '\n' << b << '\n'; 
}
