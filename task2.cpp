#include <iostream>
using namespace std;

int main(){
    char c;
    int a=0;
    bool sign=true;
    do{
        cin>>c;
        do{
            if (c=='-'){
                sign=false;
                
            }
            else{
                sign=true;
            }
        }while(c=='\n');
        a=c-'0'+a*10;
    }while (a==0);
    if (sign==true){
        cout<<"All numbers are positive";
    }
    else{
        cout<<"Not all numbers are positive";
    }
}

