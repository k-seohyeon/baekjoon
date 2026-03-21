#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<string, string>> v;
    v.reserve(N);

    for (int i = 0; i < N; i++) {
        string mentor, mentee;
        cin >> mentor >> mentee;
        v.push_back({mentor, mentee});
    }

    sort(v.begin(), v.end(), [](const pair<string, string>& a,
                                const pair<string, string>& b) {
        if (a.first != b.first)
            return a.first < b.first;      // 멘토 사전순
        return a.second > b.second;        // 멘티 역순
    });

    for (auto &p : v) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
