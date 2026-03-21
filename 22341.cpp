#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, C;
    cin >> N >> C;
    
    int A = N, B = N;  
    for (int i = 0; i < C; i++) {
        int X, Y;
        cin >> X >> Y;
        
    
        if (X >= A || Y >= B) {
            continue;
        }
        
        
        int area_horizontal = X * B;
        
        int area_vertical = A * Y;
        

        if (area_horizontal >= area_vertical) {
            A = X; 
        } else {
            B = Y;  
        }
    }
    cout << A * B << endl;
    
    return 0;
}
