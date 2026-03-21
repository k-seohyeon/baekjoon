#include <iostream>

using namespace std;

int main(){
    int a, b, c, t;
    cin >> a >> b >> c;
    cin >> t;

    if(t <= 30){
        cout << a;
    }
    else if((t-30)%b == 0){
        cout << a + (t-30)/b*c;
    }
    else{
        cout << a + ((t-30)/b+1)*c;
    }
    cout << endl;
    return 0;
}