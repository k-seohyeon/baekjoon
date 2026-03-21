#include <iostream>

using namespace std;

int main(){
    long long int a, b, a1, b1;
    cin >> a >> b;
    long long int gcd;
    a1 = a;
    b1 = b;
    while(b != 0){
        long long int tmp = a%b;
        a = b; 
        b = tmp;
        gcd = a;
    }

    cout << a1*b1/gcd << "\n";

    return 0;
}