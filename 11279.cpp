#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    priority_queue<int> mq;
    int x;

    while(n--){
        cin >> x;
        if(x==0){
            if(mq.empty()){
                cout << 0 << '\n';
            }
            else{
                cout << mq.top() << '\n';
                mq.pop();
            }
        }
        else mq.push(x);
    }

    return 0;
}