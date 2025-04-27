#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v(8); 
	vector<int> idx(8);
	for(int i=0; i<8; i++){
		cin >> v[i];
		idx[i] = i+1;
	}
	sort(idx.begin(), idx.end(), [&](int a, int b){
		return v[a-1] > v[b-1];
	});
	for(const auto& i : idx){
		cout << i << ' ';
	}cout << '\n'; 
	sort(idx.begin(), idx.begin()+5);
	for(int i=0; i<5; i++){
		cout << idx[i] << ' ';
	}cout << '\n';
	int sum = 0;
	for(int i=0; i<5; i++){
		sum += v[idx[i]-1];
	}
	cout << sum << '\n';
	for(int i=0; i<5; i++){
		cout << idx[i] << ' ';
	}
}
