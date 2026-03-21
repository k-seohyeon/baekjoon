#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    
    cin >> a;
    int min = a*2 ;
    if(a == 1 || a == 2){
        cout << 4 << endl;
        return 0;
    }

    for(int i = 2; i <= sqrt(a)+1; i++){
        if(a%i == 0){
            b = (a/i-1)*2 + (i-1)*2;
        }
        else{
            b = (a/i)*2 + (i-1)*2;
        }
    
        if(min > b){
            min = b;
        }
    }

    cout << min << endl;


    return 0;
}