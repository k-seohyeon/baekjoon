#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int score[5] = {0, 0, 0, 0 ,0};
    for(int i = 0 ;i < n; i++){
        cin >> score[i];
    }

    if(score[0] > score[2]) sum += (score[0]-score[2])*508;
    else sum += (score[2]-score[0])*108;

    if(score[1] > score[3]) sum += (score[1]-score[3])*212;
    else sum += (score[3]-score[1])*305;

    sum += score[4]*707;

    sum = sum*4763;

    cout << sum << endl;
    

    return 0;
}
