#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long int n, a = 0, c = 0, g = 0, t = 0, i;
    string s;
    cin >> n >> s;
    for(i = 0; i < n; i++){
        if(s[i]=='A') a++;
        else if(s[i]=='C') c++;
        else if(s[i]=='G') g++;
        else if(s[i]=='T') t++;
    }
    cout << (a*c%1000000007*g%1000000007*t)%1000000007 << endl;

    return 0;
}
