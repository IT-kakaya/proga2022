#include <iostream>
using namespace std;

char Step1(char a, int i){
    if (char(a) > 'a'){
        cout << char(a-1) << i << endl; 
    }
    if (char(a) < 'g'){
        cout << char(a+1) << i << endl;
    } 
    return 0;
}

char Step2(char a, int i){
    if (char(a) > 'b'){
        cout << char(a-2) << i << endl;
    }
    if (char(a) < 'f'){
        cout << char(a+2) << i << endl;
    }
    return 0;
}

int main(){
    char a;
    int b;
    int i;
    cout << "Enter the cell: ";
    cin >> a;
    cin >> b;
    cout << "Cells you can go to:" << endl;
    for(i = 1; i <= 8; i++){
        if (i == b - 2 && b > 2){
            Step1(a, i);
        }
        if (i == b - 1 && b > 1){
            Step2(a, i);
        }
        if (i == b + 2 && b < 7){
            Step1(a, i);
        }
        if (i == b + 1 && b < 8){
            Step2(a, i);
        }
    }
}
