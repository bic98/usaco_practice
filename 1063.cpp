#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using pii = pair<int, int>;
using ll = long long;


map<string, pii> dir = {
	{"R", {1, 0}},
	{"L", {-1, 0}},
	{"B", {0, -1}},
	{"T", {0, 1}}, 
	{"RT", {1, 1}},
	{"LT", {-1, 1}},
	{"RB", {1, -1}},
	{"LB", {-1, -1}}
};

int main(){
	fastio; 
	int n; 
	string k, s; cin >> k >> s >> n;
	int kx = k[0] - 'A', ky = k[1] - '1';
	int sx = s[0] - 'A', sy = s[1] - '1';
	for(int i = 0; i < n; i++){
		string d; cin >> d;
		int dx = dir[d].first, dy = dir[d].second;
		int nkx = kx + dx, nky = ky + dy;
		if(nkx < 0 || nkx >= 8 || nky < 0 || nky >= 8) continue;
		if(nkx == sx && nky == sy){
			int nsx = sx + dx, nsy = sy + dy;
			if(nsx < 0 || nsx >= 8 || nsy < 0 || nsy >= 8) continue;
			sx = nsx, sy = nsy;
		}
		kx = nkx, ky = nky;
	}
	cout << (char)(kx + 'A') << (char)(ky + '1') << '\n';
	cout << (char)(sx + 'A') << (char)(sy + '1') << '\n';
}
