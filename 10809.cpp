#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int l = size(s);
    int arr[26];
    for(int i = 0; i < 26; i++){
        arr[i] = -1;
    }

    for(int i = 0; i < l; i++){
        int a = s[i]- 'a';
        if(arr[a] == -1){
            arr[a] = i;
        }
    }

    for(int i = 0; i < 26; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}