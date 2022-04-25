#include <iostream>
using namespace std;

int Nod(struct drob *t){
    int r;
    while(A.znam != 0){
        r = t->chisl % t->znam;
        t->chisl = t->znam;
        t->znam = r;
    }
    return t->chisl;
}

// int schet(int a, int b, char c){
//     cout << "Сокращенная дробь:" << endl;
//     if (a == b && a != 0 && b != 0){
//         cout << 1;
//     }
//     if (a == 0 && b != 0){
//         cout << 0;
//     }
//     if (b == 0){
//         cout << "На ноль делить нельзя";
//     }
//     if (a != b && a != 0 && b != 0){
//         cout << a/Nod(a, b) << c << b/Nod(a, b);
//     }
//     return 0;
// }

struct drob{
    int chisl;
    int znam;
    //char slesh = '/';
};

int main() {
    drob A;
    cin >> A.chisl;
    //cout << A.slesh;
    cin >> A.znam;
    cout << Nod(A);
    //schet(A.chisl, A.znam, A.slesh);
}
