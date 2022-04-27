#include <iostream>
using namespace std;

struct drob Nod(struct drob);

struct drob{
    int chisl;
    int znam;
};

int main() {
    struct drob D = {D.chisl, D.znam};
    cout << "Введите числитель" << endl; 
    cin >> D.chisl;
    cout << "Введите знаменатель" << endl;
    cin >> D.znam;
    cout << "Сокращенная дробь:" << endl;
    if (D.chisl == 0 && D.znam != 0)
        cout << 0;
    if (D.znam == 0)
        cout << "На ноль делить нельзя";
    if (D.chisl == D.znam && D.znam != 0)
        cout << 1;
    if (D.chisl != D.znam && D.znam != 0 && D.chisl != 0)
        Nod(D);
}

struct drob Nod(struct drob t){
    struct drob result = {t.chisl, t.znam};
    int r;
    int T;
    while(result.znam != 0){
        r = result.chisl % result.znam;
        result.chisl = result.znam;
        result.znam = r;
        T = result.chisl;  
    }
    if (t.znam/T == 1)
        cout << t.chisl/T;
    else
        cout << t.chisl/T << "/" << t.znam/T;
}
