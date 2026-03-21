#include <iostream>
#include <algorithm>

using namespace std;

void Array(int num, int n, int m, int arr[]){
    if(num == m){
        for(int i = 0; i < m; i++){
            for(int j = i+1; j < m; j++){
                if(arr[i] >= arr[j]){
                    return;
                }
            }
        }
        for(int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = 1; i <= n; i++){
        arr[num] = i;
        Array(num+1, n, m, arr);
    }

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;//n은 수 개수, m은 배열의 원소 수
    int num = 0;
    cin >> n >> m;

    int arr[m];
    Array(num, n, m, arr);
    return 0;
}