#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    float a, b, c;
    cin >> a >> b >> c;
    int i, j, k;
    cin >> i >> j >> k;
    float q, w, e;
    q = a/i;
    w = b/j;
    e = c/k;
    
    float mini = min(q, min(w, e));

    float aa = a - (mini*i);

    float bb = b - (mini*j);
    float cc = c - (mini*k);

    printf("%.5f %.5f %.5f", aa, bb, cc);

    return 0;
}