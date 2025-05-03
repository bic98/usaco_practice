#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using pii = pair<int, int>; 

int board[2001][2001]; 
int dist[2001][2001];
int distM[2001][2001];

int main(){
	fastio; 
	int n, m, k; cin >> n >> m >> k; 
	queue<pii> man; 
	pii st, en; 
	bool exist = 0; 
	memset(dist, -1, sizeof(dist));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> board[i][j]; 
			if(board[i][j] == 3) {
				man.push({i, j}); 
				dist[i][j] = 0;
			}
			else if(board[i][j] == 4) st = {i, j}; 
			else if(board[i][j] == 2) {
				en = {i, j};
				exist = 1;
			}
		}
	}
	if(!exist){
		cout << -1 << '\n'; 
		return 0;
	}

	if(abs(st.first - en.first) + abs(st.second - en.second) <= 1){
		cout << 1 << '\n'; 
		return 0;
	}

	while(!man.empty()){
		auto [x, y] = man.front(); man.pop(); 
		for(int i = 0; i < 4; i++){
			int nx = x + "2101"[i] - '1';
			int ny = y + "1012"[i] - '1';
			if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if(dist[nx][ny] != -1) continue; 
			if(board[nx][ny] == 1) continue;
			dist[nx][ny] = dist[x][y] + 1;
			man.push({nx, ny});
		}
	}


	memset(distM, -1, sizeof(distM));
	queue<pii> Q; 
	Q.push(st);
	distM[st.first][st.second] = 0;

	while(!Q.empty()){
		auto [x, y] = Q.front(); Q.pop(); 
		for(int i = 0; i < 4; i++){
			int nx = x + "2101"[i] - '1';
			int ny = y + "1012"[i] - '1';
			if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if(distM[nx][ny] != -1) continue; 
			if(board[nx][ny] == 1) continue;
			if(board[nx][ny] == 3) continue; 
			if(dist[nx][ny] <= k) continue; 
			if(board[nx][ny] == 2){
				cout << distM[x][y] + 1 << '\n'; 
				return 0;
			}
			distM[nx][ny] = distM[x][y] + 1;
			Q.push({nx, ny});
		}
	}
	cout << -1 << '\n'; 
}

