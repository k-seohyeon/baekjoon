#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long K;
    cin >> N >> K;
    
    vector<long long> A(N);
    long long maxA = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (A[i] > maxA) {
            maxA = A[i];
        }
    }
    long long left = 0, right = maxA, answer = maxA;
    while (left <= right) {
        long long mid = (left + right) / 2;
        long long sum = 0;
        for (int i = 0; i < N; ++i) {
            if (A[i] > mid) {
                sum += A[i] - mid;
            }
        }

        if (sum <= K) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << answer << '\n';
}
