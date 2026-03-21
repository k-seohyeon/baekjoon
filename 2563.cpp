#include <iostream>

using namespace std;

int main(){
    int arr[100][100] = {0};
    long long n, a, b, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        for(int j = a-1; j < a+9; j++){
            for(int k = b-1; k < b+9; k++){
                if(arr[j][k] == 0){
                    arr[j][k] = 1;
                    sum++;
                }
            }
        }
    }
    cout << sum << endl;
    
    return 0;
}