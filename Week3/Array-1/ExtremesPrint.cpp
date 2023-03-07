#include<iostream>
using namespace std;
int main()
{
    int arr[8]={10,20,30,40,50,60,70,80};
    int size=8;
    int s=0;
    int e=size-1;
    while (s<e)//0<7, 1,<6, 2<5, 3<4,4<4
    {
        cout<<arr[s]<<" ";
        cout<<arr[e]<<" ";
        s++;
        e--;
    }
    
}