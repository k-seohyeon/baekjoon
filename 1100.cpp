#include <iostream>

using namespace std;

int main(){
    char arr[8][8];
    int sum = 0;
    

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 8; i ++){
        if(i%2 == 0){
            for(int j = 0; j < 8; j+=2){
                if(arr[i][j] == 'F'){
                    sum++;
                }
            }
        }
        else{
            for(int j = 1; j < 8; j+=2){
                if(arr[i][j] == 'F'){
                    sum++;
                }
            }
        }
        
    }

    cout << sum << endl;

    return 0;
}