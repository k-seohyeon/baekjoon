#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> sws(n);
    for (int i = 0; i < n; i++) {
        cin >> sws[i];
    }

    int cnt = 0;
    int least = 0;

    for (int sw : sws) {
        if (sw < x) {
            least += sw;
        } else {
            int crnt_cnt = sw / x;
            int crnt_least = sw % x;
            cnt += crnt_cnt;

            if (crnt_least > crnt_cnt * (y - x)) {
                least += (crnt_least - crnt_cnt * (y - x));
            }
        }
    }

    cout << cnt << endl;
    cout << least << endl;

    return 0;
}
