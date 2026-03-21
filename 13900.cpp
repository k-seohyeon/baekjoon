#include <iostream>

using namespace std;

int main(){
    int n;
    int arr[100000];
    cin >>n;
    long long sum = 0, temp = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        temp += arr[i];
    }

    for(int i = 0; i < n; i++){
        sum += arr[i] * (temp - arr[i]);
    }

    cout << sum/2 << endl;

    return 0;
}