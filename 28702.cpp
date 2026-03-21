#include <iostream>
#include <string>

using namespace std;

int fizzbuzz(string x){
    if(x == "FizzBuzz"){
        return 1;
    }
    else if(x == "Fizz"){
        return 2; //2는 Fizz
    }
    else if(x == "Buzz"){
        return 3; //3은 Buzz
    }
    else{
        return 4; //4는 그냥 숫자
    }
}

void print_fizzbuzz(int x){
    if(x % 5 == 0 && x % 3 == 0){
        cout << "FizzBuzz" << "\n";
    }
    else if(x % 3 == 0){
        cout << "Fizz" << "\n";
    }
    else if(x % 5 == 0){
        cout << "Buzz" << "\n";
    }
    else{
        cout << x << "\n";
    }  
}

int main(){
    string a, b, c;
    cin >> a >> b >> c;
    int a1, b1, c1;
    a1 = fizzbuzz(a);
    b1 = fizzbuzz(b);
    c1 = fizzbuzz(c);
    int num;

    if(a1 == 4){
        num =  stoi(a) + 3;
    }
    else if(b1 == 4){
        num = stoi(b) + 2;
    }
    else{
        num = stoi(c) + 1;
    }
    print_fizzbuzz(num);

    return 0;
}