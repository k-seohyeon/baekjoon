#include <iostream>
#include <algorithm>

using namespace std;

bool same[8] = {};

void Array(int num, int n, int m, int arr[], int narr[]){
    if(num == m){
        for(int i = 0; i < m; i++){
            cout << narr[i] << " ";
        }
        cout << "\n";
        return;
    }

    int same_num = 0;

    for(int i = 0; i < n; i++){
        if(!same[i] && arr[i] != same_num){
            same[i] = true;
            narr[num] = arr[i];
            same_num = arr[i];
            Array(num+1, n, m, arr, narr);
            same[i] = false;
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;//n은 수 개수, m은 배열의 원소 수
    int num = 0;
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);

    int narr[m];

    Array(num, n, m, arr, narr);
    return 0;
}