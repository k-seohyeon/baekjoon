#include <iostream>

using namespace std;

int main(){
    long long n, f, a, b, resurt = 0;
    cin >> n >> f;
    a = n % 100;
    b = n - a;
    while(b > resurt){
        resurt += f;
    }
    resurt = resurt%100;
    
    if(resurt < 10){
        cout << "0" << resurt << endl;
    }
    else{
        cout << resurt << endl;
    }
    return 0;
}