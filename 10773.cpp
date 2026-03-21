#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, num;
    cin >> n;
    int a[n];
    for(int i = 0; i < n ; i++){
        cin >> a[i];

        if(a[i] == 0){
            num = i-1;
            while(1){
                if(a[num] != 0){
                    a[num] = 0;
                    break;
                }
                num--;
            }

        }
    }

    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }

    cout << sum << endl;
    return 0;
}