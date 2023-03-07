#include<iostream>
#include<string.h>
using namespace std;

// Input-> "My name is Babbar"
// Replace all the space with space
// Output-> "My@name@is@Babbar"
void replaceSpace(char sentence[])
{
    int i=0;
    // strlen(sentence)-> O(n) time
    while (sentence[i]!='\0') // Or while(i<=strlen(sentence)-1)
    {
        if(sentence[i]==' ')
        {
            sentence[i]='@';
        }
        i++;
    }
    cout<<sentence;
}

int main()
{
char sentence[100];
cin.getline(sentence,50); 
replaceSpace(sentence);
}