#include <iostream>
using namespace std;

struct drob{
    int chisl;
    int znam;
};

void Nod(drob & t);

int main() {
    drob D;
    cout << "Введите числитель" << endl; 
    cin >> D.chisl;
    cout << "Введите знаменатель" << endl;
    cin >> D.znam;
    drob & t = D;
    Nod(D);
    cout << "Сокращенная дробь:" << endl;
    if (D.chisl == 0 && D.znam != 0)
        cout << 0;
    if (D.znam == 0)
        cout << "На ноль делить нельзя";
    if (D.chisl == D.znam && D.znam != 0)
        cout << 1;
    if (D.chisl != D.znam && D.znam != 0 && D.chisl != 0)
        cout << D.chisl << "/" << D.znam;
}

void Nod(drob& t){
    struct drob result = {t.chisl, t.znam};
    int r;
    int T;
    while(result.znam != 0){
        r = result.chisl % result.znam;
        result.chisl = result.znam;
        result.znam = r;
        T = result.chisl;  
    }
    t.chisl = t.chisl/T;
    t.znam = t.znam/T;
}
