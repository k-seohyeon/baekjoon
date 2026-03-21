#include <iostream>
#include <string>

using namespace std;

void rev(string s, int i, int a){
    for(int j = a-1; j >= i; j--){
        cout << s[j];
    }
}

void rev2(string s, int i){
    for(int j = s.length()-1; j >= i; j--){
        cout << s[j];
    }
}

int main(){
    string s;
    getline(cin, s);
    int i = 0;
    while(true){
        if(i >= s.length()) break;
        if(s[i]=='<'){
            int a = s.find('>', i);
            cout << s.substr(i, a-i+1);
            i = a+1;
        }
        else if(s[i]==' '){
            cout << ' ';
            i++;
            int a = s.find_first_of("< ", i);
            if(a==-1){
                rev2(s, i);
                return 0;
            }
            rev(s, i, a);
            i = a;
        }
        else{
            int a = s.find_first_of(" <", i);
            if(a==-1){
                rev2(s, i);
                return 0;
            }
            rev(s, i, a);
            i = a;
        }
    }

    return 0;
}