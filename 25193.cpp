#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c = 0, nc = 0;
    int result;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'C'){
            c++;
        }
        else{
            nc++;
        }
    }
    result = c/(nc+1);
    if(c%(nc+1) != 0){
        result++;
    }

    cout << result << endl;

    return 0;
}
