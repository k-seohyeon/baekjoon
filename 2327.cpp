#include <bits/stdc++.h>
using namespace std;

int H, N;
int dp[100000];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> H >> N;

    vector<int> height(N), speed(N);
    for (int i = 0; i < N; i++) {
        cin >> height[i] >> speed[i];
    }

    fill(dp, dp + H + 1, -1);
    dp[0] = INT_MAX;

    for (int i = 0; i < N; i++) {
        int h = height[i];
        int s = speed[i];

        for (int j = H; j >= h; j--) {
            if (dp[j - h] != -1) {
                dp[j] = max(dp[j], min(dp[j - h], s));
            }
        }
    }

    cout << dp[H] << '\n';
    return 0;
}
