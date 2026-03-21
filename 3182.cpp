#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, max = 0, sum, num = 1000;
    cin >> n;
    vector<int> a(n+1);

    for(int i = 1; i < n+1; i++){
        cin >> a[i];
    }

    for(int i = 1; i < n+1; i++){
        vector<bool> visited(n+1, false);
        int m = a[i];
        sum = 0;
        visited[i] = true;
        while(!visited[m]){
            visited[m] = true;
            m = a[m];
            sum++;
        }
        if(max < sum){
            max = sum;visited[m] = true;
            num = i;
        }
        else if(max == sum && i < num){
            num = i;
        }
    }

    cout << num << endl;
    return 0;
}