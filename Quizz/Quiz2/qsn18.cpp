#include<iostream>
using namespace std;

int main()
{
    int a=10,b=6,c,d;
    c=a,b,b;
    cout<<"C="<<c<<endl;
    d=(a++,a+100,a+999);
    cout<<"D="<<d<<endl;
    return 0;
}