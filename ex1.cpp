#include <iostream>
using namespace std;

int nod(int a, int b){
    int R;
    if (a == 0 || b == 0)
    return (a+b);
    if (a > b){
      R = a - b;
      return nod(R, b);
    }
    if (b > a){
      R = b - a;
      return nod(a, R);
    }
}

// struct drob{
//     int chisl;
//     char slesh;
//     int znam;
// };

int main() {
    // drob A;
    // A.slesh = '/';
    // cin >> A.chisl;
    // cin >> A.znam;
    
    // cout << nod(A.chisl, A.znam);
    int a, b;
    cin >> a;
    cin >> b;
    cout << nod(a, b);
}
