#include<iostream>

using namespace std;

string* Sortirovka(int n, int m, string** cafe){
    for (int I=0; I<n; I++){
        int Max = 0, MaxI;
        for (int i=I; i<n; i++){
            if (stoi(cafe[i][3]) >= Max){
                Max = stoi(cafe[i][3]);
                MaxI = i;
            }
        }
        for (int j=0; j<4; j++){
            string word;
            word = cafe[I][j];
            (cafe[I][j]).clear();
            cafe[I][j] = cafe[MaxI][j];
            (cafe[MaxI][j]).clear();
            cafe[MaxI][j] = word;
            word.clear();
        }
        for (int j=0; j<4; j++){
            cout << cafe[I][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    int n=3, m=4;
    string** cafe = new string*[n];
  for (int i=0; i < n; i++){
    cafe[i] = new string[m];
  }
  
    for (int i=0; i<n; i++){
        for (int j=0; j<4; j++){
            getline(cin, cafe[i][j]);
        }
    }
    Sortirovka(n, m, cafe);
}
