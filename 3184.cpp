#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using pii = pair<int,int>; 

vector<string> board; 

int main(){
	int n, m; cin >> n >> m; 
	for(int i = 0; i < n; i++){
		string s; cin >> s; 
		board.push_back(s); 
	}
	int wolf = 0, sheep = 0; 
	auto dfs = [&](int x, int y, auto&& dfs) -> void{
		if(board[x][y] == 'o') sheep++;
		else if(board[x][y] == 'v') wolf++;
		board[x][y] = '#'; 
		for(int k = 0; k < 4; k++){
			int nx = x + "2101"[k] - '1';
			int ny = y + "1012"[k] - '1';
			if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue; 
			if(board[nx][ny] == '#') continue;
			dfs(nx, ny, dfs);
		}
	}; 
	pii ans = {0, 0}; 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(board[i][j] == '#') continue; 
			wolf = 0, sheep = 0;
			dfs(i, j, dfs);
			if(sheep > wolf) ans.first += sheep; 
			else ans.second += wolf;
		}
	}
	cout << ans.first << ' ' << ans.second << '\n'; 
}
