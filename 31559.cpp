#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using pii = pair<int, int>;

int main(){
	int n, s; cin >> n >> s; 
	vector<pii> arr(n);
	for(int i = 0; i < n; i++){
		int a, b; cin >> a >> b; 
		arr[i] = {a, b};
	}
	int jump = 1, loc = s - 1, dir = 1, ans = 0, cnt = 0; 

	while(0 <= loc && loc < n && cnt < 1e6){
		if(arr[loc].first){
			if(arr[loc].second <= jump && arr[loc].second != -1){
				ans++; 
				arr[loc].second = -1;
			}
		}else{
			dir *= -1; 
			jump += arr[loc].second;
		}
		loc += dir * jump;
		cnt++; 
	}
	cout << ans << '\n'; 
}
