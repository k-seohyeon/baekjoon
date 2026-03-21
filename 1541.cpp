#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b = "";
    int sum = 0;
    cin >> a;

    int q = a.find('-');
    if(q != -1){
        b = a.substr(0, q);
        a.erase(0,q+1);
    }
    else{
        b = a;
        a = "";
    }

    while(!b.empty()){
        int p = b.find('+');
        if(p == -1){
            sum += stoi(b);
            b = "";
        }
        else{
            sum += stoi(b.substr(0,p));
            b.erase(0,p+1);
        }
    }

    while(!a.empty()){
        int i = a.find('-');
        if(i != -1){
            b += a.substr(0, i);
            a.erase(0,i+1);
        }
        else{
            b = a;
            a = "";
        }
        
        while(!b.empty()){
            int j = b.find('+');
            if(j == -1){
                sum -= stoi(b);
                b = "";
            }
            else{
                sum -= stoi(b.substr(0,j));
                b.erase(0,j+1);
            }
        }
    }
    cout << sum << "\n";

    return 0;
}