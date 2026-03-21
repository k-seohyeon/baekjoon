#include <iostream>
#include <string>

using namespace std;

int main(){
    int arr[1000];
    int n, sum = 99; 
    string a;

    cin >> n;
    if(n < 100){
        cout << n << endl;
    }
    else{
        for(int i = 0; i < n; i++){
            arr[i] = i + 1;
        }

        for(int i = 99; i < n; i++){
            a = to_string(arr[i]);
            if(arr[i] < 1000){
                if(a[1] *2== a[0]+a[2]){
                    sum++;
                }
            }
        }
        cout << sum << endl;
    }      
    
    
    return 0;
}   