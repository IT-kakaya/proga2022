#include <iostream>
using namespace std;

float delenie(float n1, float n2){
    if (n2 == 0)
        throw "На ноль делить нельзя";
    return n1/n2;
}

int main() {
    float n1, n2;
    cout << "Введите делимое:" << endl;
    cin >> n1;
    cout << "Введите делитель:" << endl;
    cin >> n2;
    try{
        cout << "Результат деления:" << endl << delenie(n1, n2) << endl;
    }
    catch(...){
        cout << "Вообще-то на ноль делить нельзя";
    }
    return 0;
}
