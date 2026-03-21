#include <iostream>

using namespace std;

int main(){
    int n, same = 0;
    cin >> n;
    int a[n];
    bool seat[101] = {false};

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(seat[a[i]]){
            same++;
        }
        else{
            seat[a[i]] = true;
        }
    }

    cout << same << endl;

    return 0;
}