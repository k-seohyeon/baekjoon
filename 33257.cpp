#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long int n, e, m, sum = 0;
    vector<long long int> a;

    cin >> n >> e;

    for( int i = 0 ; i < n; i++){
        cin >> m; 
        a.push_back(m);
    }

    sort(a.begin(), a.end());

    sum++;

    for(int i = 0; i < n-1; i++){
        if(a[i+1]-a[i] >= e){
            sum++;
        }
    }

    cout << sum<< endl;

    return 0;
}