#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> a;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(a.empty()) a.push_back({num, 1});
        else if(a.back().first == num) (a.back().second)++;
        else a.push_back({num, 1});
    }
    int ans = 0;
    for(int i = 0; i < a.size(); i++){
        int kk = 0, j = i;
        int gap = 0;
        int target = (a.begin() + i)->first;
        while(j < a.size()){
            if((a.begin()+j)->first == target){
                gap += (a.begin()+j)->second;
            }
            else if((a.begin()+j)->first != target && ((a.begin()+j)->second)+kk <= k){
                kk += (a.begin()+j)->second;
            }
            else{
                break;
            }
            j++;
        }
        if(ans < gap){
            ans = gap;
        }
    }

    cout << ans << '\n';
    
    return 0;
}