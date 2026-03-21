#include <iostream>

using namespace std;

int main(){
    long long a, all = 1;

    cin >> a;

    for(int i = 1; i <= a; i++){
        all *= i;
    }

    cout << all << endl;
    
    return 0;
}