#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct Node{
    int x, y;
};

int main(){
    int n, m;
    cin >> n >> m;
    vector<Node> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].x >> a[i].y;
    }

    sort(a.begin(), a.end(), [](Node A, Node B){
        return A.x + A.y < B.x + B.y;
    });

    vector<long long> dp(n, 0);
    long long ans = 0;

    for(int i = 0; i < n; i ++){
        int c = max(0, m-(a[i].x + a[i].y));

        dp[i] = c;

        for(int j = 0; j < i; j++){
            if(a[j].x <= a[i].x && a[j].y <= a[i].y){
                dp[i] = max(dp[i], dp[j] + c);
            }
        }

        ans = max(ans, dp[i]);
    }

    cout << ans << '\n';

    return 0;
}