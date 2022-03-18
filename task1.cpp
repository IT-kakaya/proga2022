#include <iostream>
using namespace std;

int Reverse(int start){
    int obr=0;
    int a;
    while (start>0){
        a=start%10;
        start=start/10;
        obr=obr*10+a;
    }
    return obr;
}

int main(){
    int start;
    cout<<"Enter a number";
    cin>>start;
    cout<<"Reversed number: "<<Reverse(start)<<endl;
}
