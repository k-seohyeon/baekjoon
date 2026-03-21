#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int ans = 0;
    string target = "2023";

    for (int i = 1; i <= N; i++) {
        string s = to_string(i);
        if (s.size() < 4) continue;

        int idx = 0;
        for (char c : s) {
            if (c == target[idx]) idx++;
            if (idx == 4) break;
        }

        if (idx == 4) ans++;
    }

    cout << ans << '\n';
    return 0;
}
