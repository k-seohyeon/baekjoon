#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int k, x, y, z, w;
    
    cin >> k;
    for(int i = 0; i < k; i++){
        long long sum = 0;
        cin >> x >> y >> z >> w;
        for(int j = x-1; j < z; j++){
            for(int a = y-1; a < w; a++){
                sum += arr[j][a];
            }
        } 
        cout << sum << endl;
    }

    

    return 0;
}