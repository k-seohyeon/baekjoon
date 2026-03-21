#include <iostream>

using namespace std;

int main(){
    int n;
    long long a, sum = 0;
    cin >> n;
    
    for(int i = 1; i < n; i++){
        a = n*i + i;
        if(a/n > i){
            break;
        }
        else{
            sum += a;
        }
    }
    
    cout << sum << endl;
    return 0;
}