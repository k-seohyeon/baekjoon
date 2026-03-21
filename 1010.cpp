#include <iostream>
using namespace std;

int main(){
    long long a, b = 1, n, m;
    cin >> a;
    
    for(int i = 0; i < a; i++){
        cin >> n >> m;
        b = 1;
        for(int i = 1; i <= n; i++){
            b = b*m/i;
            m--;
        }
        cout << b << endl;
    }
    
    return 0;
}