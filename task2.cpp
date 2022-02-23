#include <iostream>
using namespace std;

int PositiveNumbers(int a){
    int negative=0;
    if (a<0){
        negative=negative+1;
    }
    return negative;
}

int main(){
    int amount=0;
    int a;
    cout<<"Enter numbers. If you want to stop, enter 0:"<<endl;
    while(char(a)!=13){
        cin>>a;
        PositiveNumbers(a);
        amount=amount+PositiveNumbers(a);
    }
    if (amount!=0){
        cout<<"Not all numbers are positive"<<endl;
    }
    else cout<<"All numbers are positive"<<endl;
}
//Оно не работает так, как нужно (числа не перестают вводиться с пробелом, но если ввод закончить, то остальная часть работает, проблема только с остановкой ввода чисел), но я старалась, не придумала ничего другого
