#include <iostream>

using namespace std;

int main(){
    int max = 100000;
    int arr[max] = {0};
    int n;
    cin >> n;

    for(int i = 0; i< n; i++){
        arr[i] = i+1;
    }
    int m = 0, k = n;
    while(1){
        cout << arr[m] << " ";
        arr[k] = arr[m+1];
        m += 2;
        k++;
        if(arr[m] == 0){
            break;
        }
    }

    return 0;
}