#include <iostream>

using namespace std;

int main()
{
    string a, b, c, d, e, f;
    int wide;
    cin>>wide;
    int roof=wide-2;
    int i, n, N;
    a= '/';
    b='\\';
    c='_';
    d=' ';
    if (wide%2 == 0){
        for (i=1; i<(wide/2);i++){
            n=roof-2-i;
            N=i;
            if (((roof-2)-n)>1){
                f.append(d);
                f.append(d);
            }
            e.clear();
            for (N; N<(roof/2+1);N++){
                e.append(d);
            } 
            cout<<e<<a<<f<<b<<endl;
        }
    }
    else{
        for (i=1; i<(wide/2+1); i++){
            e.append(d);
        } 
        cout<<e<<c<<endl;
        f=' ';
        for (i=1; i<(wide/2);i++){
            n=roof-2-i;
            N=i;
            if (((roof-2)-n)>1){
                f.append(d);
                f.append(d);
            }
            e.clear();
            for (N; N<(roof/2+1);N++){
                e.append(d);
            } 
            cout<<e<<a<<f<<b<<endl;
        }
    }
    for (i=1; i<(wide-1); i++){
        a.append(c);
    }
    cout<<a<<b;
}
