#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main (){
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> mp;

    for(int i = 0; i < n;i++){
        string site, password;
        cin >> site >> password;
        mp[site] = password;
    }

    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
         cout << mp[s] << '\n';
    }

    return 0;
}