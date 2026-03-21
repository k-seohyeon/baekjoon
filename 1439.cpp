#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    cin >> a;

    int c0 = 0, c1 = 0;

    if (a[0] == '0'){
        c0++;
    }
    else{
        c1++;
    }

    for(int i = 1; a[i] != '\0'; i++){
        if(a[i] != a[i-1]){
            if(a[i] == '0'){
                c0++;
            }
            else{
                c1++;
            }
        }
    }

    cout << min(c0, c1) << endl;

    return 0;
}