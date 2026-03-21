#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s;

    for(int i = 0; i < n; i++){
        getline(cin, s);
        int m = 0;
        for(int j = 0; j <= s.length(); j++){
            if(s[j] == ' ' || j == s.length()){
                for(int k = j-1; k >= m; k--){
                    cout << s[k];
                }
                if(j != s.length()){
                    cout << " ";
                }
                m = j + 1;
            }
        }
        cout << "\n";
    }

    return 0;
}