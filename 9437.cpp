#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n, p;
    cin >> n >> p;

    while(n != 0){
        if(p%2 == 1){
            if(p <= n/2){
                cout << p+1 << " " << n-p << " " << n-p+1 << endl; 
            }
            else{
                cout << n-p << " " << n-p+1 << " " << p+1 << endl;
            }
        }
        else{
            if(p <= n/2){
                cout << p-1 << " " << n-p+1 << " " << n-p+2 << endl; 
            }
            else{
                cout << n-p+1 << " " << n-p+2 << " " << p-1 << endl;
            }
        }

        cin >> n;
        if(n==0){
            break;
        }
        cin >> p;
    }

    return 0;
}