#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; 
    string s;
    vector<int> a, b;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        a.push_back(m);
    }
    cin.ignore();
    getline(cin, s);
    for(int i = 0; i < n; i++){
        if(s[i] == 32){
            b.push_back(0);
        }
        else if(s[i] >= 97){
            b.push_back(s[i] - 70);
        }
        else{
            b.push_back(s[i] - 64);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());


    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            cout << "n" << endl;
            return 0;
        }
    }
    cout << "y" << endl;

    return 0;
}