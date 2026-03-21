#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    while(n != 0 || m != 0){
        
        cout << n+m << endl;
        cin >> n >> m;
    }

    return 0;
}