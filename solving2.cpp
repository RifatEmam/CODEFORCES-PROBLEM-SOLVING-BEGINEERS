#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<int> p(n+1);
        vector<int> present(n+1, 0);
        int zeros = 0, idx0 = -1;
        for (int i = 1; i <= n; ++i) {
            cin >> p[i];
            if (p[i] == 0) { zeros++; idx0 = i; }
            else if (1 <= p[i] && p[i] <= n) present[p[i]] = 1;
        }


        vector<int> fixed(n+1, 0);
        for (int i = 1; i <= n; ++i) {
            if (p[i] != 0 && p[i] == i) fixed[i] = 1;
        }


        if (zeros == 1) {
            int missing = -1;
            for (int v = 1; v <= n; ++v) if (!present[v]) { missing = v; break; }
            if (missing == idx0) fixed[idx0] = 1;
        }


        int Lfixed = 0;
        for (int i = 1; i <= n; ++i) {
            if (fixed[i]) ++Lfixed;
            else break;
        }

        int Rfixed = 0;
        for (int i = n; i >= 1; --i) {
            if (fixed[i]) ++Rfixed;
            else break;
        }

        int ans = n - Lfixed - Rfixed;
        if (ans < 0) ans = 0;
        cout << ans << '\n';
    }

    return 0;
}
