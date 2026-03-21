#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int p1, p2, p3;
    queue<pair<int, int>> line;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++){
        cin >> p1;
        if(p1 == 1){
            cin >> p2 >> p3;
            line.push({p2, p3});
        }
        else{
            cin >> p2;

            int a1 = line.front().first;
            int a2 = line.front().second;
            line.pop();
            if(a2==p2){
                a.push_back(a1);
            }
            else{
                b.push_back(a1);
            }
        }
 
    }

    while(!line.empty()){
        c.push_back(line.front().first);
        line.pop();
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    for(int i = 0; i < a.size(); i++){
        cout << a[i] << ' ';
    }
    if(a.size()==0) cout << "None";
    cout << '\n';
    
    for(int i = 0; i < b.size(); i++){
        cout << b[i] << ' ';
    }
    if(b.size()==0) cout << "None";
    cout << '\n';

    for(int i = 0; i < c.size(); i++){
        cout << c[i] << ' ';
    }
    if(c.size()==0) cout << "None";
    cout << '\n';



    return 0;
}