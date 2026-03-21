#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    vector<int> b;
    int n, m, num;
    cin >> n >> m;
    int mm = m;
    for(int i = 0; i < n; i++){
        cin >> num;
        a.push_back(num);
    }
    for(int i = 0; i < m; i++){
        cin >> num;
        for(int j = 0; j < m; j++){
            if(a[j]==num){
                mm--;
                break;
            }
        }
    }
    cout << mm << endl;

    return 0;
}
