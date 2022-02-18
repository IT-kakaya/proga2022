#include <iostream>
using namespace std;

float Square(float a, float b){
    return a*b;
}

int main(){
    float a, b;
    cin>>a;
    cin>>b;
    cout<<Square(a, b)<<endl;
}
