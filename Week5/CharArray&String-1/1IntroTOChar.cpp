#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[1];
    // cin>>ch;
    // If I take inout like "Ashraya Dargarh" and display it then I will get 
    // cout<<ch; "Ashraya" after the space or enter or tab it won't take any input.

    //How to fix?>
    //To display the name after the space we can use function
    // cin.getline(ch,50);
    // Max size of this array(ch) is 50 
    // Third parameter that we can pass inside this getline function is delimiting character means On which input 
    // you want you stop your program. 
    // cout<<ch;

    char arr[100];
    arr[2]='A';
    arr[49]='D';
    // cin>>arr;
    cin.getline(arr,50);
    cout<<"Output="<<arr;

}