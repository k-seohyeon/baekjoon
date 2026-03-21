#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long int n;
    cin >> n;
    if(n==1) cout << n << endl;
    else if(n==2) cout << 4 << endl;
    else if(n%2==0){
        cout << n << endl;
    }
    else{
        cout << n+1 << endl;
    }

    return 0;
}
