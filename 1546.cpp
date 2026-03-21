#include <iostream>

using namespace std;

int main(){
    int n, max = 0;
    float sum = 0;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        sum += arr[i];
    }

    sum /= n;
    sum /= max;
    sum *= 100;

    cout << sum << endl;
    
    return 0;
}