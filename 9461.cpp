#include <iostream>


using namespace std;

int main(){
    int max = 101;
    long long a[max];
    a[3] = a[1] = a[2] = 1;
    a[5] = a[4] = 2;
    long long n, b; 
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> b;
        for(int j = 6; j <= b+1; j++){
            a[j] = a[j-1] + a[j-5];
        }
        cout << a[b] << endl;
    }

    
    return 0;
}