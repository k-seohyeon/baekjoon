#include <iostream>

using namespace std;

int main(){
    int n, a, b, sum = 0;
    cin >> n;
    cin >> a;
    sum += a;
    b = a;
    for(int i = 1; i < n; i++){
        cin >> a;
        if(a-b != 1){
            sum += a;
        }
        b = a;
    }

    cout << sum << endl;
    return 0;
}