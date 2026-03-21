#include <iostream>

using namespace std;

int main(){
    int a, b, v; //a는 낮에 올라가는 높이, b는 밤에 미끄러지는 높이, v는 올라가야하는 높이
    cin >> a >> b >> v;
    int cnt = 0;
    a -=b;
    v -= b;
    if(v%a == 0){
        cnt = v/a;
    }
    else{
        cnt = v/a +1;
    }
    
    cout << cnt<< "\n";
    return 0;
}