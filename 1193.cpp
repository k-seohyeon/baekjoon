#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    
    int a = 1; int b = 1; //a는 n이 위치하는 대각선의 수, b는 n이 위치한 대각선의 분모 + 분자

    while(n > b){
        a++;
        b += a;
    }

    int c = b - n; //c는 대각선에서 n번째 분수의 위치 

    int p ,q;
    if(a%2 == 0){
        p = a - c; 
        q = 1 + c;
    }
    else{
        q = a - c;
        p = 1 + c;
    }


    cout << p << "/" << q << endl;

    return 0;
}