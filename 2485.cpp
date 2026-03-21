#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    
    cin >> n;
    vector<int> a,b;
    for(int i = 0; i < n; i++){
        cin >> m;
        a.push_back(m);
    }
    for(int i = 1; i < n;i++){
        b.push_back(a[i] - a[i-1]);
    }
    int max = b[0];
    for(int i = 0; i < b.size(); i++){
        max = gcd(max, b[i+1]);
    }

    int sum = 0;
    for(int i = 0; i < b.size(); i++){
        sum += (b[i]/max) - 1;
    }

    cout << sum << endl;


    return 0;
}