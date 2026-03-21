#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[16], b[16];
    a[1] = 2;
    a[2] = 3;
    a[3] = 5;
    b[1] = 4;
    b[2] = 5;
    b[3] = 16;

    for(int i = 4; i <= 16; i++){
        a[i] = a[i-1]*2 - 1;
        b[i] = a[i]*a[i] - a[i-1]*a[i-1];
    }

    int sum = 0;
    for(int i = 1; i <= n+1; i++){
        sum += b[i];
    }

    cout << sum << endl;

    return 0;
}