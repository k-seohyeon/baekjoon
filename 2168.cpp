#include <iostream>

using namespace std;

int gcd(int n, int m){
    while(m != 0){
        int temp = n%m;
        n = m;
        m = temp;
        gcd(n, m);
    }
    return n;
}

int main(){
    int m, n, gcd1, num = 0;
    cin >> m >> n;
    gcd1 = gcd(n, m);

    m /= gcd1;
    n /= gcd1;

    num = (n + m - 1)*gcd1;

    cout << num<< endl;

    return 0;
}