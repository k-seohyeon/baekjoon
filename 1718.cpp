#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, p;
    getline(cin, s);
    getline(cin, p);
    int n = p.length();
    int i = 0;
    while(true){
        for(int j = 0; j < n; j ++){
            if(s[i] == ' ') {
                i++;
                continue;
            }
            int a = p[j] - 'a';
            if(s[i] <= p[j]) s[i] = 'z' - a + (s[i] - 'a');
            else s[i] = s[i] - a-1;
            i++;
            if(i >= s.length()) break;
        }
        if(i >= s.length()) break;
    }

    cout << s << endl;

    return 0;
}
