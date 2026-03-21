#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int sum = 0;
    int num = 1;
    int y = sqrt(n);
    while(y >= num){
        if(n%num == 0 && num*num != n){
            sum += 2;
        }
        else if(num*num == n){
            sum ++;
        }
        num++;
    }
    cout << sum << endl;

    return 0;
}