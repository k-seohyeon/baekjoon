#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        if(n == 1){
            cout << 0 << endl;
        }
        else if(n%2 == 0){
            for(int j = 0; j < n; j++){
                cout << 1;
            }
            cout << endl;
        }
        else{
            cout << 1;
            for(int j = 0; j < n-2; j++){
                cout << 2;
            }
            cout << 1;

            cout << endl;
        }
    }
    return 0;
}
