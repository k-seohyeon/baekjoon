#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    int n, num, num1, num2;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        num = 0;
        for(int i = 0; a[i] != '\0'; i++){
            if(a[i] == '('){
                num++;
            }
            else{
                num--;
                if(num < 0){
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        if(num == 0){
            cout << "YES" << endl;
        }
        else if(num > 0){
            cout << "NO" << endl;
        }
    }


    return 0;
}