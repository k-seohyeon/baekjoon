#include <iostream>

using namespace std;
void num(int n, int* sum){
    if(n == 1){
        *sum += 2;
    }
    else if(n == 0){
        *sum += 4;
    }
    else{
        *sum += 3;
    }
}

int main(){
    int n, sum = 0;
    cin >> n;
    while(n != 0){
        if(n < 10){
            num(n, &sum);
            sum += 2;
        }

        else if(n < 100){
            num(n%10, &sum);
            num(n/10, &sum);
            sum += 3;
        }
        else if(n < 1000){
            num(n%10, &sum);
            num((n%100)/10, &sum);
            num(n/100, &sum);
            sum+=4;
        }
        else{
            num(n%10, &sum);
            num((n%1000)/100, &sum);
            num((n%100)/10, &sum);
            num(n/1000,&sum);
            sum+=5;
        }
        cout << sum << endl;
        
        cin >> n;
        sum = 0;
    }
    
    return 0;
}