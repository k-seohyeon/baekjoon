#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin >> a;
    for(int i = 0; i < a.size(); i++){
        int t = a[i];
        int n = 0;
        while(t){
            n += t%10;
            t /= 10;
        }
        for(int j = 0; j < n; j++){
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}