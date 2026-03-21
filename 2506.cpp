#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int total = 0, c = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            c++;
            total += c;
        }
        else{
            c = 0;
        }
    }

    cout << total << endl;
    
    return 0;
}