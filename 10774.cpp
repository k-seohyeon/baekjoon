#include <bits/stdc++.h>
using namespace std;

int sz(char c) {
    if (c == 'S') return 0;
    if (c == 'M') return 1;
    return 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int J;
    cin >> J;

    int A;
    cin >> A;

    vector<int> jersey(J + 1);
    for (int i = 1; i <= J; i++) {
        char c;
        cin >> c;
        jersey[i] = sz(c);
    }

    vector<pair<int,int>> players;
    players.reserve(A);

    for (int i = 0; i < A; i++) {
        char c;
        int num;
        cin >> c >> num;
        players.push_back({sz(c), num});
    }

    // 요구 사이즈만 기준으로 내림차순
    sort(players.begin(), players.end(),
         [](auto &a, auto &b) {
             return a.first > b.first;
         });

    int answer = 0;
    for (auto &p : players) {
        int need = p.first;
        int num = p.second;

        if (jersey[num] >= need) {
            answer++;
            jersey[num] = -1;
        }
    }

    cout << answer << "\n";
}
