#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p;
    int x;

    while(n--){
        cin >> x;
        if(x==0){
            if(p.empty()) cout << 0 << '\n';
            else {
                cout << p.top().second << '\n';
                p.pop();
            }
        }
        else{
            p.push({abs(x), x});
        }
    }

    return 0;
}