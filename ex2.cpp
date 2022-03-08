#include <iostream>
using namespace std;

int main()
{
    int n, m, sum = 0;
    cout << "Введите число строк и столбцов в массиве:" << endl;
    cin >> n;
    cin >> m;
    
    int array[n][m];
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> array[i][j];
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (array[i][j] > 0){
                sum += array[i][j];
            }
        }
    }
    
    cout << "Сумма всех положительных элементов массива:" << endl;
    cout << sum;
}
