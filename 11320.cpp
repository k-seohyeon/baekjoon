#include <iostream>

using namespace std;

int main(){
    int t, a, b;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b;

        int l = a/b;
        cout << l*l << endl;
    }

    return 0;
}