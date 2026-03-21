#include <iostream>
#include <vector>

using namespace std;

vector<bool> prime(119, true);

void checkprime(){
    prime[0] = prime[1] = false;
    for(int i = 2; i * i <= 118; i++){
        if(prime[i]){
            for(int j = i*i; j <= 118; j += i){
                prime[j] = false;
            }
        }
    }
}

bool checksum(int a){
    for(int i = 2; i <= a/2; i++){
        if(prime[i]&&prime[a-i]){
            return true;
        }
    }
    return false;
}

int main(){
    checkprime();

    int n;
    cin >> n;

    while(n > 0){
        n--;
        int a;
        cin >> a;
        if(checksum(a)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}