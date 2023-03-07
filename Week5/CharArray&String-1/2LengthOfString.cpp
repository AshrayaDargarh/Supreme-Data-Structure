#include<iostream>
#include<string.h>
using namespace std;

int getLength(char name[])
{
    int len=0,i=0;
    while (name[i]!='\0')
    {
       len++;
       i++;
    }
    return len;
}
// Time Complexity-> O(n)
int main()
{
    char name[100];
    cin>>name;
    cout<<"Length is: "<<getLength(name);
    // Predefine fun for Length we should Always include<string.h>
    cout<<"Length is->"<<strlen(name);
    // Don't Need to dependent on predefine function;

    // sizeof(arr)/sizeof(char)
}