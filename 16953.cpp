#include <iostream>

using namespace std;

int main(){
    long long a, b, c, count = 1;
    cin >> a >> b;
    
    while(a < b){
        if(b%10 == 1){
            b = b/10;
        }
        else if(b%2 == 0){
            b = b/2;
        }
        else{
            break;
        }
        count++;
    }
    

    if(a == b){
        cout << count << endl;
    }
    else{
        cout << "-1" << endl;
    }

    return 0;
}