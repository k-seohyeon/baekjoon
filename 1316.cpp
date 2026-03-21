#include <iostream>
#include <string>

using namespace std;

bool num(string a){
    int n = a.length();
    int arr[26] = {0};

    int j = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] != a[i+1]){
            if(arr[a[i]-'a'] == 1){
                return false;
            }
            arr[a[i]-'a'] = 1;
        }
    }

    if(arr[a[n-1]-'a'] == 1){
        return false;
    }


    return true;
}

int main(){
    int n, sum = 0;
    string a; 
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(num(a) != false){
            sum++;
        }
    
    }

    cout << sum << endl;

    return 0;
}