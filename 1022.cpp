#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x1, y1, x2, y2, r1, r2;

    for(int i = 0; i < n; i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if(x1==x2 && y1==y2){
            if(r1 == r2){
                cout << -1 << '\n';
                continue;
            }
            else{
                cout << 0 << '\n';
                continue;
            }
        }
        long long a = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        long long b = (r1 + r2)*(r1+r2);
        long long c = (r1-r2)*(r1-r2);
        if(a > b) cout << 0 << '\n';
        else if(a < c) cout << 0 << '\n';
        else if(a == b) cout << 1 << '\n';
        else if(a == c) cout << 1 << '\n';
        else cout << 2 << '\n';
    }

    return 0;
}