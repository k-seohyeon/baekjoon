#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char s[11];
    char m[11];
    int n, num = 0;
    cin >> s;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> m;
        if(!strncmp(s, m, 5)){
            num++;
        }
    }
    
    cout << num << endl;

    return 0;
}