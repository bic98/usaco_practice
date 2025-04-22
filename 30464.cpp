#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    fastio; 
    int n; cin >> n; 
    vector<int> v(n + 1); 
    for(int i = 1; i <= n; i++) cin >> v[i];
    vector<int> dp(n + 1, -1); 
    dp[n] = 0; 
    for(int i = n - 1; i >= 1; i--){
        if(v[i] == 0){
            dp[i] = -1; 
        }else if(i + v[i] <= n && dp[i + v[i]] != -1){
            dp[i] = dp[i + v[i]] + 1;
        }else{
            dp[i] = -1; 
        }
    }

    vector<int> dp2(n + 1, -1);
    for(int i = 1; i <= n; i++){
        int prev = i - v[i]; 
        if(prev < 1 || v[i] == 0){
            dp2[i] = -1;
        }else{
            int c1 = dp[prev] != -1 ? dp[prev] + 1 : -1;
            int c2 = dp2[prev] != -1 ? dp2[prev] + 1 : -1;
            dp2[i] = max(c1, c2);
        }
    }
    int ans = -1;
    for(int i = 1, j = 0; i < n; i += v[i]){
        if(dp[i] != -1){
            ans = max(ans, dp[i] + j);
        }
        if(dp2[i] != -1){
            ans = max(ans, dp2[i] + j);
        }
        if(v[i] == 0) break;
        j++;
    }
    cout << ans << '\n'; 
}
