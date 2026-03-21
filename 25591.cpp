#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d, q, r;
    cin >> a >> b;
    a = 100-a;
    b = 100-b;
    c = 100-(a+b);
    d = a*b;
    q = d/100;
    r = d%100;
    cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << endl;
    cout << c+q << " " << r << endl;

    return 0;
}
