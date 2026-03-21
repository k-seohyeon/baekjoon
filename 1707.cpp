#include <iostream>

using namespace std;

struct Node{
    int u, v;
};

int main(){
    int k, v, e;
    cin >> k;

    for(int i = 0; i < k; i++){
        cin >> v >> e;
        vector<Node> a(e);
        for(int j = 0; j < e; j++){
            cin >> a[j].u >> a[j].v;
        }
        
    }


    return 0;
}