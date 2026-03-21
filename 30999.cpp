#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        int o = 0, x = 0;
        for(int j = 0; j < m; j++){
            if(s[j] == 'O'){
                o++;
            }
            else{
                x++;
            }
        }
        if(o > x) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
