#include <iostream>

using namespace std;

int main(){
    int n, x, y, a = 0, b = 0, c = 0, d = 0, axis = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(x == 0 || y == 0){
            axis++;
        }
        else if(x > 0 && y > 0){
            a++;
        }
        else if(x < 0 && y < 0){
            c++;
        }
        else if(x < 0){
            b++;
        }
        else{
            d++;
        }
    }

    cout << "Q1: " <<  a << endl;
    cout << "Q2: " << b << endl;
    cout << "Q3: " << c << endl;
    cout << "Q4: " << d << endl;
    cout << "AXIS: " << axis << endl;

    return 0;
}