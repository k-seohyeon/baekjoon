#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    scanf("%d", &n);
    int a = 0,b = 1,c;
    if(n == 1){
        printf("%d", b);
        return 0;
    }
    else if(n==0){
        printf("%d", a);
        return 0;
    }

    for(int i = 0; i < n-1; i++){
        c = b;
        b = (a+b)%1000000007;
        a = c;
    }


    printf("%d",  b);

    return 0;
}