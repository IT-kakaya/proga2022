#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Введите число элементов в массиве:" << endl;
    cin >> n;
    
    int array[n];
    cout << "Введите элементы массива" << endl;
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    int Nmin = 0; //Предроложим, что наименьшее число - первое 
    int Nmax = 0; //Предположим, что наибольшее число - первое
    for (int i = 0; i < n; i++){ 
        if (array[i] < array[Nmin]){
            Nmin = i;
        }
        if (array[i] > array[Nmax]){
            Nmax = i;
        }
    }
    int NewMin = array[Nmin];
    array[Nmin] = array[Nmax];
    array[Nmax] = NewMin;
    
    cout << "Преобразованный массив:" << endl;
    for (int i = 0; i < n; i++){
        cout << array[i] << ' ';
    }
}
