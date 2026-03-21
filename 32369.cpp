#include <bits/stdc++.h>

using namespace std;

void swap(int* x, int* y){
    int tmp = *x; 
    *x = *y;
    *y = tmp;
}

int main(){
    int a, n, m;
    cin >> a >> n >> m;
    int x = 1, y = 1;
    for(int i = 0; i < a; i++){
        x += n;
        y += m;
        if(x < y){
            swap(&x, &y);
        }
        if(x == y){
            y--;
        }
    }
    cout << x << " " << y << endl;

    return 0;
}