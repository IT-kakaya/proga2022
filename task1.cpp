#include <iostream>
using namespace std;

float Conversion(float x){
    cout<<x*2.54<<endl;
    return 0;
}

int main(){
    float x;
    cin>>x;
    Conversion(x);
}
