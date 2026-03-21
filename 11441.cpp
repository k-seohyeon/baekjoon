#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; // n은 수의 개수, m은 합을 구해야 하는 횟수
    cin >> n;
    long long int arr[n+1];
    long long int sum[n+1] = {0};

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        sum[i] = sum[i-1]+arr[i];
    }
    
    cin >> m;

    long long int a, b;// a는 시작하는 수, b는 더해야 하는 수의 개수
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        cout << sum[b] - sum[a] + arr[a] << "\n";
    }

    return 0;
}