#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool increasing = true; // 증가 구간
    bool has_increase = false; // 증가가 한 번이라도 있었는지
    bool has_decrease = false; // 감소가 한 번이라도 있었는지

    for (int i = 1; i < N; i++) {
        if (A[i] == A[i - 1]) {
            cout << "NO" << endl; // 동일한 값은 허용되지 않음
            return 0;
        }
        if (increasing) {
            if (A[i] > A[i - 1]) {
                has_increase = true;
            } else {
                increasing = false;
                has_decrease = true;
            }
        } else {
            if (A[i] < A[i - 1]) {
                has_decrease = true;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}
