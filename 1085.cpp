#include <iostream>

using namespace std;

int main(){
    int x,y,w,h, min;

    cin >> x >> y >> w >> h;
    int a[4];
    a[0] = abs(x-w);
    a[1] = abs(x);
    a[2] = abs(y);
    a[3] = abs(y-h);
    min = a[0];
    for(int i = 0; i < 4; i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    cout << min << endl;

    return 0;
}
