#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> stones(n);
    for (int i = 0; i < n; i++) {
        cin >> stones[i];
    }

    long long left = stones[0];
    long long right = stones[1];

    for (int i = 2; i < n; i++) {
        if (left == right) {
            left += stones[i];
        } else if (left < right) {
            left += stones[i];
        } else {
            right += stones[i];
        }
    }

    long long diff = abs(left - right);

    vector<int> weights = {100, 50, 20, 10, 5, 2, 1};
    int cnt = 0;
    for (int w : weights) {
        cnt += diff / w;
        diff %= w;
    }

    cout << cnt << '\n';
    return 0;
}
