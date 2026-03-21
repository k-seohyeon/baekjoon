#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, a;
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> a;
        int b = sqrt(a);
        if(a == b*b){
            cout << 1;
        }
        else{
            cout << 0;
        }
        cout << endl;
    }
    return 0;
}
