#include <iostream>

using namespace std;

int main(){
    long long a, b, n;
    cin >> a >> b >> n;
    long long num;
    while(n != 0){
        a = a%b;
        a *= 10;
        n--;
    }
    num = a / b;
    cout << num << endl;

    return 0;
}