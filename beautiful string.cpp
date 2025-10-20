#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int pos[1000];
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                pos[count] = i + 1;
                count++;
            }
        }

        cout << count << '\n';
        for (int i = 0; i < count; i++) {
            cout << pos[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
