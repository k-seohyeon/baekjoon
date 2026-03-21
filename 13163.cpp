#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string a;

    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a);
        int index = a.find(" ");
        cout << "god";
        for(int j = index; j < a.size(); j++){
            if(a[j] != ' '){
                cout << a[j];
            }
        }
        cout << endl;
    }

    return 0;
}