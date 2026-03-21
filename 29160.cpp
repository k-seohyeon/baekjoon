#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    vector<priority_queue<int>> a(12);
    for(int i = 0; i < n; i++){
        int position, worth;
        cin >> position >> worth;
        a[position].push(worth);
    }

    for(int j = 0; j < k; j++){
        for(int p = 1; p < 12; p++){
            if(a[p].empty()) continue;

            int top = a[p].top();
            a[p].pop();
            if(top > 0) top--;

            a[p].push(top);
        }
    }

    int sum = 0;
    for(int i = 1; i < 12; i++){
        if(!a[i].empty()){
            sum += a[i].top();
        }
    }
    
    cout << sum << '\n';

    return 0;
}