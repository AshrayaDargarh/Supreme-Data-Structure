#include<iostream>
using namespace std;

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    int s=0,e=size-1;
    while (s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}