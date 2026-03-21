#include <iostream>
#include <vector>

using namespace std;

int N, K;
int num;

void heapify(vector<int>& A, int k, int n){
    int left = 2*k, right = 2*k+1;
    int smaller;
    if(right <= n){
        if(A[left] < A[right]) smaller = left;
        else smaller = right;
    }
    else if(left <= n) smaller = left;
    else return;

    if(A[smaller] < A[k]){
        int a = A[k];
        A[k] = A[smaller];
        A[smaller] = a;
        num++;
        if(num == K) cout << min(A[k], A[smaller]) << " " << max(A[k], A[smaller]);
        heapify(A, smaller, n);
    }
}

void build_min_heap(vector<int>& A, int n){
    for(int i = n/2; i >= 1; i--){
        if(num >= K) return;
        heapify(A, i, n);
    }
}

void heap_sort(vector<int>& A){
    build_min_heap(A, N);
    for(int i = N; i >=2; i--){
        if(num >= K) return;
        int a = A[1];
        A[1] = A[i];
        A[i] = a;
        num++;
        if(num == K) cout << min(A[1], A[i])  << " " << max(A[1], A[i]);
        heapify(A, 1, i-1);
    }
}

int main(){
    cin >> N >> K;
    vector<int> A(N+1);
    for(int i = 1; i <= N; i++){
        cin >> A[i];
    } 
    num = 0;
    heap_sort(A);
    if(num < K) cout << -1 << '\n';

    return 0;
}