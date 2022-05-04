#include <iostream>
using namespace std;

string parol(string login1, string login, string password1){
    string password;
    for(int i = 0; i<3; i++){
        cout << "Введите пароль" << endl;
        cin >> password;
        if(password1 == password){
            i = 3;
        }
    }
    if (password != password1 || login != login1)
        throw "Неверный пароль или логин";
    return "Пароль подошел";
}

int main() {
    string login1 = "logg";
    string password1 = "jsm";
    string login;
    cout << "Введите логин" << endl;
    cin >> login;
    try{
        cout << parol(login1, login, password1);
    }
    catch(...){
        cout << "Неправильный пароль или логин";
    }
}
