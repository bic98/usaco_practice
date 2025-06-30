#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
	fastio; 
	int m, k; cin >> m >> k; 
	if(m % k == 0){
		cout << "Yes" << '\n'; 
	}else{
		cout << "No" << '\n'; 
	}
}
