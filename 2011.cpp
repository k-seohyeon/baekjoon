#include <iostream>
#include <string>
#include <vector>

using namespace std;

int findnum(string s, vector<int> arr){
    if(s.empty()){
        vector<int>::iterator it;
        for(it = arr.begin(); it != arr.end(); it++){
            if(*it > 26 || *it == 0){
                return 0;
            }
        }
        return 1;
    }
    else{
        int cnt = 0;

        arr.push_back(s[0] - '0');
        cnt = cnt + (findnum(s.substr(1), arr))% 1000000;
        arr.pop_back();

        if(s.length() >= 2){
            int num = stoi(s.substr(0,2));
            if(num >= 10 && num <= 26){
                arr.push_back(num);
                cnt = (cnt + findnum(s.substr(2), arr)) % 1000000;
                arr.pop_back();
            }
        }
        return cnt % 1000000;
    }
}

int main(){
    string s;
    getline(cin, s);

    vector<int> arr;
    int cnt = findnum(s, arr);
    cout << cnt << "\n";

    return 0;
}