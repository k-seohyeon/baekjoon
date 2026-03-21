#include <iostream>

using namespace std;

int main(){
    int n, sum;
    int arr[50][2];

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0; j < n; j++){
            if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]){
                sum ++;
            }
        }
        cout << sum +1<< " ";
    }
    return 0;
}