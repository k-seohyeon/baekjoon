#include <iostream>

using namespace std;

int main(){
    int arr[10];
    int arr1[42];
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    for(int i = 0; i <= 42; i++){
        arr1[i] = 0;
    }

    for(int i= 0; i < 10; i++){
        int a = arr[i]%42;
        arr1[a]++;
    }
    int cnt = 0;
    for(int i = 0; i < 43; i++){
        if(arr1[i] >= 1){
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}