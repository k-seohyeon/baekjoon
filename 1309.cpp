#include <iostream>

using namespace std;


int main() {
    int N;
	cin >> N;
	int arr[N+1];
	arr[0] = 1;
	arr[1] = 3;

	for (int i = 2; i <= N; i++) {
		arr[i] = (arr[i - 1] * 2 + arr[i - 2]) % 9901;
	}

	cout << arr[N] % 9901 << '\n';

	return 0;
}