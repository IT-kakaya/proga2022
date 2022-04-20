#include <iostream>
using namespace std;

int* summa(int *a, int *b, int n, int *summ){
    for (int i = 0; i < n; i++){
        summ[i] = a[i] + b[i];
    }
    return summ;
}

int* rasnost(int *a, int *b, int n, int *summ){
    for (int i = 0; i < n; i++){
        summ[i] = a[i] - b[i];
    }
    return summ;
}

int* Schet(int *a, int *b, char c, int n){
    int summ[n];
    if (c == '+'){
        summa(a, b, n, summ);
        for (int i = 0; i < n; i++){
            cout << summ[i] << " ";
        }
        return 0;
    }
    if (c == '-'){
        rasnost(a, b, n, summ);
        for (int i = 0; i < n; i++){
            cout << summ[i] << " ";
        }
        return 0;
    }
    return 0;
}

int main(){
    char c;
    int n;
    int a[n], b[n];
    cout << "Введите количенство элементов в массиве" << endl;
    cin >> n;
    cout << "Введиете первый массив" << endl;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Введиете знак" << endl;
    cin >> c;
    cout << "Введиете второй массив" << endl;
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    cout << "Результат:" << endl;
    Schet(a, b, c, n);
}
