#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int X, Y;
    cin >> X >> Y;

    int L = lcm(X, Y); //주기

    for (int t = 1; t <= L; t++) {
        bool left = (t % (L / X) == 0);   // 왼손
        bool right = (t % (L / Y) == 0);  // 오른손

        if (left && right) cout << 3; // 양손
        else if (left) cout << 1;     // 왼손만
        else if (right) cout << 2;    // 오른손만
    }

    cout << '\n';
    return 0;
}
