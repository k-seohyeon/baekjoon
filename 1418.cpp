#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int num, sum = 1;
    if(n <= k){
        cout << n <<endl;
        return 0;
    }

    for(int i = 2; i <= n; i++){
        num = i;
        int m = 2;
        while(m <= i && m <= k){
            if(num % m == 0){
                while(num%m == 0){
                    num /= m;
                }
                
            }
            m++;
            
        }
        if(num <= k){
            sum++;
        }
    }

    cout << sum << endl;

    return 0;
}