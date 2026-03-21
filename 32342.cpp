#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    int n, num;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        num = 0;
        for(int i = 0; a[i] != '\0'; i++){
            if(a[i] == 'W'){
                if(a[i+1] == 'O' && a[i+2] == 'W'){
                    num++;
                }
            }
        }
        cout << num << endl;
    }


    return 0;
}