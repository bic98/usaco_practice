#include<bits/stdc++.h>
#include <cstdint>
#define fastio cin.tie(nullptr) -> sync_with_stdio(false)
using namespace std;

int count_x[1001][1001];
int count_y[1001][1001]; 
int count_z[1001][1001]; 


int main(){
	fastio;
	int n, q; cin >> n >> q; 
	int ans = 0; 
	int x, y, z;
	while(q--){
		cin >> x >> y >> z;
		count_x[x][y] += 1;
		count_y[y][z] += 1;
		count_z[z][x] += 1;
		if(count_x[x][y] == n) ans++;
		if(count_y[y][z] == n) ans++;
		if(count_z[z][x] == n) ans++;
		cout << ans << '\n'; 
	}
}
