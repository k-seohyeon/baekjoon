#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; ++i) {
        if (s[i - 1] != '0') {
            dp[i] = (dp[i] + dp[i - 1]) % 1000000;
        }

        int t = stoi(s.substr(i - 2, 2));
        if (t >= 10 && t <= 26) {
            dp[i] = (dp[i] + dp[i - 2]) % 1000000;
        }
    }

    cout << dp[n] << "\n";

    return 0;
}
