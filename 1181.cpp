#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 비교 함수
bool compare(const string &a, const string &b) {
    // 길이가 다르면 길이로 비교
    if (a.length() != b.length())
        return a.length() < b.length();
    // 길이가 같으면 사전순으로 비교
    return a < b;
}

int main() {
    int n;
    cin >> n;
    string arr[20000];

    // 단어 입력받기
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 정렬 (길이 우선, 길이가 같으면 사전순)
    sort(arr, arr + n, compare);

    // 중복 단어는 출력하지 않기 위해 이전 단어를 저장
    string prev = "";

    for (int i = 0; i < n; i++) {
        if (arr[i] != prev) {  // 중복된 단어는 출력하지 않음
            cout << arr[i] << endl;
            prev = arr[i];
        }
    }

    return 0;
}