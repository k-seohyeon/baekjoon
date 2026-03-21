#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, m;
     
    cin >> n;
    vector<long long > arr1(n);

    long long a;

    for(int i = 0; i < n; i++){
        cin >> a;
        arr1[i] = a;
    }

    sort(arr1.begin(), arr1.end());

    cin >> m;

    for(int i = 0; i < m; i++){
        long long b;
        cin >> b;

        if(binary_search(arr1.begin(), arr1.end(), b)){
            cout << 1 << '\n';
        }
        else cout << 0 << '\n';
    }
    

    return 0;
}