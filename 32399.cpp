#include <iostream>
#include <string>

using namespace std;

int change(string a, int num){
    if(a == "(1)"){
        return num;
    }
    else{
        num++;
        if(a[0] == '(' && a[1] != '1'){
            return num;
        }
        if(a[0] == '1'){
            return 1;
        }
        if(a[0] == ')' && a[1] == '1'){
            return num+1;
        }
        else{
            return num;
        }
    }
} 

int main(){
    string a;
    int num = 0;
    getline(cin, a);
    
    cout << change(a, num) << endl;

    return 0;
}