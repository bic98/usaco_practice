#include <bits/stdc++.h>
using pii = std::pair<int, int>;

inline void fastio() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
}

std::vector<pii> v;

void solve() {
    int n;
    std::cin >> n;
    int ans = 0;
    for (const auto& [l, r] : v) {
        if (l > n) break;
        if (l <= n && n <= r) ans += n - l + 1;
        else if (n > r) ans += r - l + 1;
    }
    std::cout << ans << '\n';
}

int main() {
    fastio();
    std::string l = "45";
    std::string r = "49";
    while (true) {
        int L = std::stoi(l);
        int R = std::stoi(r);
        if (R > 100000) break;
        v.emplace_back(L, R);
        l = "4" + l;
        r = r + "9";
    }
    int t;
    std::cin >> t;
    while (t--) solve();
}

