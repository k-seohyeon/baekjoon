#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    char arr[50][50];
    string a;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a;
        for(int j = 0; j < m; j++){
            arr[i][j] = a[j];
        }
    }
   
    int min1 = 64;  

    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            int w_start = 0;  
            int b_start = 0;  
            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    if ((x + y) % 2 == 0) {
                        if (arr[i + x][j + y] != 'W') w_start++;  
                        if (arr[i + x][j + y] != 'B') b_start++;
                    } else {
                        if (arr[i + x][j + y] != 'B') w_start++;  
                        if (arr[i + x][j + y] != 'W') b_start++;  
                    }
                }
            }
            min1 = min(min1, min(w_start, b_start));
        }
    }
    
    cout << min1 << endl;

    return 0;
}