#include <iostream>
using namespace std;

int* Bubble(int n, int* a){
    int t;
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n; i++){
            if (a[i] > a[i+1]){
                t = a[i+1];
                a[i+1] = a[i];
                a[i] = t;
            }
        }
    }
    return 0;
}

int main() {
    int n;
    cout << "Введите количество элементов в массиве:" << endl;
    cin >> n;
    int a[n];
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    Bubble(n, a);
    cout << "Новый массив:" << endl;
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
