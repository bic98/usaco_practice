#include<bits/stdc++.h>
using namespace std;
#deinfe fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	int n; cin >> n; 
	int k = 0; 
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < n; j++){
			int a; cin >> a; 
			if(a == 7) k++; 
		}
	}
	if(k == 3){
		cout << "777" << '\n'; 
	}else{
		cout << "0" << '\n'; 
	}
}
