#include <iostream>
using namespace std;

float Conversion(float x){
    return x*2.54;
}

int main(){
    float x;
    cin>>x;
    cout<<Conversion(x)<<endl;
}
