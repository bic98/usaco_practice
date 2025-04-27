#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using pii = pair<int, int>;
using ll = long long; 


int board[121][121];


int main(){
	fastio; 
	int n; cin >> n;
	string s; cin >> s; 
	int dir = 0; 
	int x = 60, y = 60;
	board[x][y] = 1;
	int minx = x, maxx = x, miny = y, maxy = y;
	for(int i = 0; i < n; i++){
		if(s[i] == 'L') {
			dir = (dir + 3) % 4;
		}else if(s[i] == 'R'){
			dir = (dir + 1) % 4;
		}else{
			int nx = x + "2101"[dir] - '1';
			int ny = y + "1012"[dir] - '1';
			board[nx][ny] = 1;
			minx = min(minx, nx);
			maxx = max(maxx, nx);
			miny = min(miny, ny);
			maxy = max(maxy, ny);
			x = nx; 
			y = ny;
		}
	}
	for(int i = minx; i <= maxx; i++){
		for(int j = miny; j <= maxy; j++){
			if(board[i][j] == 1) cout << '.';
			else cout << '#';
		}
		cout << '\n';
	}
}
