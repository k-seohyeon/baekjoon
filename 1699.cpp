#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int m = (int)sqrt(n);
    if(m*m==n) {
        cout << 1 << '\n';
        return 0;
    }
    vector<int> dp(n+1);
    for(int i = 0; i <= n; ++i){
        dp[i] = i; 
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j*j <= i; j++){
            dp[i] = min(dp[i], dp[i-j*j]+1);
        }
    }

    cout << dp[n] << endl;
    return 0;
}