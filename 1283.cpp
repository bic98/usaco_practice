#include <bits/stdc++.h>
#include <cctype>
#include <sstream>
#define fastio cin.tie(0) -> sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n;
	cin >> n;
	cin.ignore(); 
	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		getline(cin, v[i]);
	}
	vector<int> al(26); 
	for(int i = 0; i < n; i++){
		string now = v[i]; 
		stringstream in(now); 
		vector<string> ret; 
		string s; 
		while(in >> s){
			ret.push_back(s); 
		}
		bool f = 0; 
		for(int j = 0; j < ret.size(); j++){
			int id = tolower(ret[j][0]) - 'a'; 
			if(al[id] == 0){
				f = 1; 
				ret[j] = "[" + ret[j].substr(0, 1) + "]" + ret[j].substr(1, (int)ret[j].size());
				al[id] = 1; 
				break; 
			}
		}
		if(f){
			for(int k = 0; k < ret.size(); k++){
				cout << ret[k] << ' '; 
			}
		}
		else{
			int id = -1; 
			for(int j = 0; j < now.size(); j++){
				if(now[j] == ' ') continue; 
				int p = tolower(now[j]) - 'a';
				if(al[p] == 0){
					id = j; 
					al[p] = 1; 
					break; 
				}
			}
			if(id != -1){
				cout << now.substr(0, id) << "[" << now[id] << "]" << now.substr(id + 1, (int)now.size()); 
			}
			else{
				cout << now; 
			}
		}
		cout << '\n'; 
	}
}


