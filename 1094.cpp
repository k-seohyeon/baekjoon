#include <iostream>

using namespace std;

int main(){
    int n, m = 64, stick = 0;
    cin >> n;
    
    if(n == m){
        cout << "1" << endl;
        return 0;
    }
    
    while(1){
        if(m/2 <= n){
            stick++;
            
            n -= m/2;
        }
        m /= 2;

        if(n == 0){
            cout << stick << endl;
            break;
        }
    }

    return 0;
}