#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a[5] = {0, 0, 0, 0, 0};
    for(int i = 0; i < n; i++){
        if(s[i]=='H')a[0]++;
        else if(s[i]=='I')a[1]++;
        else if(s[i]=='A')a[2]++;
        else if(s[i]=='R')a[3]++;
        else if(s[i]=='C')a[4]++;
    }
    
    int num = min({a[0], a[1], a[2], a[3], a[4]});

    cout << num << endl;
    return 0;
}
