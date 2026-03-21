#include <iostream>
#include <string>

using namespace std;
 
int main (){
    long long n, b;
    cin >> n >> b;
    string result;
    long long sum = 1, nn;
    while(sum <= n/b){
        sum *= b;
    }

    while(sum > 0){
        nn = n/sum;
        n = n%sum;
        sum /= b;
        if(nn <= 9){
            result += nn + '0';
        }
        else{
            result += nn - 10 + 'A';
        }
    }

    cout << result << "\n";
    return 0;
}