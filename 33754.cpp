#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    vector<int> row1(N), row2(N);

    for (int i = 0; i < N; i++) cin >> row1[i];
    for (int i = 0; i < N; i++) cin >> row2[i];

    row1[0] = 1;
    row2[N-1] = 1;

    int result = 0;

    for (int i = 0; i < N - 1; i++) {
        if ((row1[i] == 0 && row2[i+1] == 0)||(row1[i] == 0 && row2[i] == 0)||(row1[i+1] == 0 && row2[i] == 0)) {
            cout << 0 << endl;
            result = 2;
            break;
        }
        if(row1[i] == 0 || row2[i] == 0){
            result = 1;
        }
    }

    if(result != 2){
        if(result == 1){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }

    return 0;
}
