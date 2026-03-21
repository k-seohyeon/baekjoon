#include <iostream>
using namespace std;

void array(int num, int n, int m, int arr[]){
    if(num == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = 1; i <= n; i++){
        arr[num] = i;
        array(num+1, n, m, arr);
    }

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;//n은 최대수, m은 배열의 원소 수

    cin >> n >> m;

    int arr[m];
    array(0, n, m, arr);
    return 0;
}