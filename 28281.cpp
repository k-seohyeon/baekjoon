#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> a;
    set<int> b;
    int n, x, num;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> num;
        a.push_back(num);
    }
    for(int i = 0; i < n-1; i++){
        b.insert(a[i]+a[i+1]);
    }

    cout << *(b.begin()) * x << endl;

    return 0;
}