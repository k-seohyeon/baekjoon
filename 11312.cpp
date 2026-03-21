#include <iostream>

using namespace std;

int main(){
    int T, a, b;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> a >> b;
        long long int n = a/b;
        if(a%b > 0){
            n++;
        }
        cout << n*n << endl;
    }
}