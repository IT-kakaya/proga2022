#include <iostream>
using namespace std;

float Square(float a, float b){
    cout<<a*b<<endl;
    return 0;
}

int main(){
    float a, b;
    cin>>a;
    cin>>b;
    Square(a, b);
}
