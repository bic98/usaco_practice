#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)


struct Player{
	int num; 
	int mul_score; 
	int add_score;
}; 


int main(){
	int n; cin >> n; 
	vector<Player> v(n); 
	for(int i = 0; i < n; i++){
		int num; cin >> num; 
		v[i].num = num; 
		int a, b, c; cin >> a >> b >> c; 
		v[i].mul_score = a * b * c; 
		v[i].add_score = a + b + c;
	}

	sort(v.begin(), v.end(), [&](const Player& a, const Player& b){
		if(a.mul_score == b.mul_score) {
			if(a.add_score == b.add_score) return a.num < b.num; 
			return a.add_score < b.add_score; 
		}
		return a.mul_score < b.mul_score;
	});

	for(int i = 0; i < 3; i++){
		cout << v[i].num << ' '; 
	}
	cout << '\n'; 
}
