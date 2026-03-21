#include <bits/stdc++.h>

using namespace std;

int main(){
    int len, num = 0;
    string a;
    cin >> len;
    cin >> a;

    for(int i = 0; i < len-3; i++){
        if(a[i] == 'p' && a[i+1] == 'P' && a[i+2] == 'A' && a[i+3] == 'p'){
            i +=3;
            num++;
        }
    }
    cout << num << endl;


    return 0;
}