#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, n, k, w;
    cin >> m >> n >> k >> w;
    vector<vector<int>> v(m, vector<int>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }

    vector<int> num(w*w);
    for(int i = 0; i < m-w+1; i++){
        for(int j = 0; j < n-w+1; j++){
            int p = 0;
            for(int t = 0; t < w; t++){
                for(int l = 0; l < w; l++){
                    num[p] = v[i+t][j+l];
                    p++;
                }
            }
            sort(num.begin(), num.end());
            cout << num[w*w/2] << " ";
        }
        cout << endl;
    }


    return 0;
}
