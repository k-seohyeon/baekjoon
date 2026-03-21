#include <iostream>
#include <vector>
#include <set>
using namespace std;

int countDiffs(const vector<int>& arr) {
    set<int> diffs;
    int n = arr.size();
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            diffs.insert(abs(arr[i] - arr[j]));
        }
    }
    return diffs.size();
}

int main() {
    int N;
    cin >> N;

    vector<int> max_seq, min_seq;

    // 최댓값: 공비가 2인 등비수열
    int base = 1;
    for (int i = 0; i < N; ++i) {
        max_seq.push_back(base);
        base *= 2;
    }

    // 최솟값: 공차가 1인 등차수열
    base = 1;
    for (int i = 0; i < N; ++i) {
        min_seq.push_back(base + i);
    }

    // 출력
    cout << countDiffs(max_seq) << '\n';
    for (int x : max_seq) cout << x << ' ';
    cout << '\n';

    cout << countDiffs(min_seq) << '\n';
    for (int x : min_seq) cout << x << ' ';
    cout << '\n';

    return 0;
}
