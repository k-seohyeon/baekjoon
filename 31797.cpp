#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[1000][2], arr1[2000];

    for(int i = 0; i < m; i++){
        cin >> arr[i][0] >> arr[i][1];
        arr1[2*i] = arr[i][0];
        arr1[2*i+1] = arr[i][1];
    }

    sort(arr1, arr1 + 2*m);

    int num = n%(m*2);
    for(int i = 0;i < m; i++){
        if(num == 0){
            if(arr[i][0] == arr1[2*m-1] || arr[i][1] == arr1[2*m-1]){
            cout << i+1 << endl;
            break;
            }
        }

        if(arr[i][0] == arr1[num-1] || arr[i][1] == arr1[num-1]){
            cout << i+1 << endl;
            break;
        }
    }

    return 0;
}