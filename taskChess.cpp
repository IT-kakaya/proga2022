#include <iostream>
using namespace std;

int main(){
    char a;
    int b;
    int i;
    cout<<"Enter the cell: ";
    cin>>a;
    cin>>b;
    cout<<"Cells you can go to:"<<endl;
    for(i=1; i<=8; i++){
        if (i==b-2 && b>2){
            if (char(a)>'a'){
                cout<<char(a-1)<<i<<endl;
            }
            if (char(a)<'g'){
                cout<<char(a+1)<<i<<endl;
            }
        }
        if (i==b-1 && b>1){
            if (char(a)>'b'){
                cout<<char(a-2)<<i<<endl;
            }
            if (char(a)<'f'){
                cout<<char(a+2)<<i<<endl;
            }
        }
        if (i==b+2 && b<7){
            if (char(a)>'a'){
                cout<<char(a-1)<<i<<endl;
            }
            if (char(a)<'g'){
                cout<<char(a+1)<<i<<endl;
            }
        }
        if (i==b+1 && b<8){
            if (char(a)>'b'){
                cout<<char(a-2)<<i<<endl;
            }
            if (char(a)<'f'){
                cout<<char(a+2)<<i<<endl;
            }
        }
    }
}
