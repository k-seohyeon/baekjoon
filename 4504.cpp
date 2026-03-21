#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int num;
    cin >> num;
    while(num != 0){
        
        if(num % n == 0){
            cout << num << " is a multiple of " << n << "." << endl; 
        }
        else{
            cout << num << " is NOT a multiple of " << n << "." << endl; 
        }
        cin >> num;
    }


    return 0;
}