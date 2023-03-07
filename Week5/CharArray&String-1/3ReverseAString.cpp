#include<iostream>
#include<string.h>

using namespace std;

// in-> Babbar
// op-> rabbab 
// We can do this by doing 2 pointer approach Swap characters

int getLength(char name[])
{
    int length=0,i=0;
    while (name[i]!='\0')
    {
        length++;
        i++;
    }
    return length;
    
}
// Time Complexity-> O(n)
int main()
{
    char name[100];
    cin>>name;

    int start=0;
    // int end=strlen(name)-1;
    int end=getLength(name)-1;
    while (start<end)
    {
        swap(name[start],name[end]);
        start++;
        end--;
    }
    // Time Complexity-> O(n/2)
    cout<<name;
}