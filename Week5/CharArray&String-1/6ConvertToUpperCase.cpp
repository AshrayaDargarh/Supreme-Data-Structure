#include<iostream>
#include<string.h>
using namespace std;

// Convert Lower case to UpperCase?
// `a`->  (Character which we want to convert into upper case) -'a'+'A'
// 'A'->65, 'a'->97
// 'c'-> 99 - 97 +65 =2+65=67('C')
// We can also -32(" ") or +32(" ") Accordingly 32-> space in asscci value
// Convert Uppercase to LowerCase?
// 'A'-> (Character)-'A'+'a'
// HomeWork

// Doubt->
// Babbar-> BABBAR How?
// Ignore Uppercase character 
// if(arr[i]>='a' && arr[i]<='z')
// Ignore space ch[i]!=' '

// Space COmplexity Change?
// When we use diff data structure i.e: O(n)
void convertIntoUpperCase(char arr[])
{
    int n= strlen(arr);
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]-'a' +'A';
    }
}
int main()
{
    char arr[100];
    cin>>arr;
    convertIntoUpperCase(arr);
    cout<<arr;
}