#include<iostream>
using namespace std;

int main()
{
    int a,b;
    a=5;
    b=++a*a++;
    cout<<"a="<<a<<"b="<<b<<endl;
    return 0;
}