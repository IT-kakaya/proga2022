#include <iostream>
using namespace std;

int PositiveOrNegative(int a){ //Функция возвращает 0, если все числа положительные, и 1, если не все числа положительные 
    int negative = 0;
    if (a < 0){
        negative = 1;
    }
    return negative;
}

int main(){
    int amount = 0;
    int a;
    cout << "Enter numbers. If you want to stop, enter 0:" << endl;
    while (a != 0){
        cin >> a;
        amount = amount + PositiveOrNegative(a);
    }
    if (amount != 0){
        cout << "Not all numbers are positive" << endl;
    }
    else{
        cout << "All numbers are positive" << endl;
    }
}

