#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B;
    string C;
    cin >> A >> B >> C;

    char last_digit = C.back();
    if ((last_digit - '0') % 2 == 0) {
        cout << A << '\n';
    } else {
        cout << (A ^ B) << '\n';
    }
    return 0;
}
