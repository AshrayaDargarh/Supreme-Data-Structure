#include<iostream>
using namespace std;

int main()
{
    char ch='a';
    char *p=&ch;
    // &ch store the address of the ch variable
    // p is a pointer to char data
    bool p1=true;
    // p1 is a pointer to bool data
    int a=5;// ek memory loction mai hai 'a' kisi ek address(104) pr 
    int* ptr=&a;// 'ptr' ke andar a ka address(104) store kr liya.
    
    // ptr is pointer to a which contain interger data
    // access the value ptr is pointing to
    cout<<"Address of a is "<<&a<<endl;
    cout<<"Value stored in ptr is "<<ptr<<endl;
    cout<<"Value ptr pointing to is "<<*ptr<<endl;
    cout<<"Address of ptr is "<<*ptr<<endl;
    // a->5, &a->104, ptr->104,&ptr->108
    cout<<*ptr<<endl;

    // Pointer in cpp is a var that stores address of another variable
    // *ptr=value at loction stored in ptr    
    // ptr-> it will print the address stored in ptr

    // Fasao
    int a1=5;
    int *p2=&a;
    char ch1='b';
    char *c=&ch1;
    double d=1.2;
    double *dtr=&d;
    // What is the size of the pointers?
    // *p-> 4, *ch=1, *dtr->8 Logically
    // But 8 for all why?
    // Address har kisi ke datatype ka same rhega to that's why 8(byte) or depending on the machine.
    // 32 bit system vs 64 bit system
    cout<<sizeof(p2);
    // Why 4 or 8

}