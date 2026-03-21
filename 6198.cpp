#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n); 
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    long long result = 0;
    vector<int> stack;   
    int top = -1;        

    for (int i = 0; i < n; i++) {
        while (top >= 0 && stack[top] <= h[i]) {
            top--;
        }

        result += (top + 1);

        if (top + 1 < stack.size()) {
            stack[top + 1] = h[i];
        } else {
            stack.push_back(h[i]);
        }
        top++;
    }

    cout << result << "\n";
    return 0;
}
