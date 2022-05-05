#include <iostream>
using namespace std;

bool parol(string login){
    string login1 = "logg";
    string password1 = "jsm";
    string password;
    for(int i = 0; i<3; i++){
        cout << "Введите пароль" << endl;
        cin >> password;
        if(password1 == password){
            i = 3;
        }
    }
    if (password != password1 || login != login1)
        throw false;
    return true;
}

int main() {
    cout << "Введите логин" << endl;
    cin >> login;
    try{
        parol();
        cout << "Пароль подошел";
    }
    catch(...){
        cout << "Неправильный пароль или логин";
    }
}
