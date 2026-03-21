#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a1, a0;
    cin >> a1 >> a0;
    int c1 ,c2;
    cin >> c1 >> c2;
    int n;
    cin >> n;
    if(c1 <= a1 && c2 >= a1){
        if(c1*n <= a1*n + a0 && c2*n>=a1*n+a0){
            cout << 1 << endl;
        }
        else cout << 0 << endl;
        return 0;
    }
    cout << 0 << endl;
    return 0;
}
