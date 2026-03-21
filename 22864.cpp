#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, m, tmp1 = 0, tmp2 = 0;
    cin >> a >> b >> c >> m;

    for(int i = 1; i <= 24; i++){
        if(tmp2 > m-a){
            tmp2 -= c;
            if(tmp2 <= 0){
                tmp2 = 0;
            }
        }
        else{
            tmp1 += b;
            tmp2 += a;
        }
    }

    cout << tmp1 << endl;

    return 0;
}