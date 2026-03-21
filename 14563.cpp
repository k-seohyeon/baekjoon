#include <iostream>
#include <cmath>

using namespace std;

int perfect(int n){
    int sum = 1;
    if(n==1) return 2;
    
    for(int i = 2; i < n; i++){
        if(n%i==0) {
            sum = sum + i;
        }
    }

    if(sum > n) return 1;  //과잉수
    else if(sum < n) return 2; //부족수
    else return 0;  //완전수
}

int main(){
    int t;
    cin >> t;
    string s[3] = {"Perfect", "Abundant", "Deficient"};
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        cout << s[perfect(n)] << endl;
    }

    return 0;
}