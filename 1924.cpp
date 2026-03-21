#include <iostream>

using namespace std;

int main(){
    int x, y, date = 0;
    cin >> x >> y;

    for(int i = 1; i < x; i++){
        if(i == 2)date += 28;
        else if(i == 4 || i == 6 || i == 9 || i == 11){
            date += 30;
        }
        else{date += 31;
        }
    }
    date+= y;

    date = (date-1) % 7;

    switch(date){
        case 0: cout << "MON";
            break;
        case 1: cout << "TUE";
            break;
        case 2: cout << "WED";
            break;
        case 3: cout << "THU";
            break;
        case 4: cout << "FRI";
            break;
        case 5: cout << "SAT";
            break;
        case 6: cout << "SUN";
            break;

    }

    return 0;
}