#include <bits/stdc++.h>
using namespace std;

int main() {
    char a[1000];
    int sum = 0;
    cin >> a;
    for(int i = 0; i < strlen(a); i++){
        if( a[i] == 'D'){
            if( a[i+1] == 'K'){
                if(a[i+2] == 'S'){
                    if(a[i+3] == 'H'){
                        sum++;
                        i = i+3;
                    }
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}
