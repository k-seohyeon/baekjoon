#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 연속된 구간의 최대 길이를 구하는 함수
int getMaxConsecutiveLength(const vector<int>& B) {
    int maxLength = 1;
    int currentLength = 1;
    
    for (int i = 1; i < B.size(); ++i) {
        if (B[i] == B[i - 1]) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }
    
    maxLength = max(maxLength, currentLength);  // 마지막 연속 구간 처리
    return maxLength;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> B(N);
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }
    

    int originalMax = getMaxConsecutiveLength(B);
    
    int result = 0;
    
    for (int i = 0; i < N; ++i) {
        vector<int> newB;
        
        for (int j = 0; j < N; ++j) {
            if (B[j] != B[i]) {
                newB.push_back(B[j]);
            }
        }
 
        result = max(result, getMaxConsecutiveLength(newB));
    }
    
    cout << max(originalMax, result) << endl;
    
    return 0;
}
