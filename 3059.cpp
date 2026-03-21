#include <bits/stdc++.h>
using namespace std;

int main() {
    string c;
    int a[26];
    int n;
    long long int sum;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        sum = 2015;
        for(int j = 0; j < 26; j++){
            a[j] = 1;
        }
        for(int j = 0; j < c.length(); j++){
            if(a[(int)c[j]-65] == 1){
                a[(int)c[j]-65] = 0;
                sum -= (int)c[j];
            }
        }

        cout << sum << endl;
    } 

    return 0;
}
