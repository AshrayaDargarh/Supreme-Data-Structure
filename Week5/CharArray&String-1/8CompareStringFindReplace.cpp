#include<iostream>
using namespace std;

// 1-> equal to 0, 
// 2-> <0, string1[0]<string2[0](first string ka first character less than second string first char in terms of asscci value)
// 3-> >0 string1[0]>string2[0](first string ka first character greater than second string first char in terms of asscci value)
// If both are equal then check next characters

bool compareString(string a, string b)
{
     if(a.length()!=b.length())
     return false;
     else
     {
        int j=0;
        for(int i=0;i<a.length();i++)
        {
           if(a[i]!=b[j]) // Or a[i]!=b[i]
           return false;

            j++; 
        }
     }
     return true;
}
int main()
{
    string a="love";
    string b="Love";
    // if(a.compare(b)==0)
    if(compareString(a,b)==1)
    {
        cout<<"A and B both are same strings"<<endl;
    }
    else{
        cout<<"A and B both are not same."<<endl;
    }
    string x="bzcd";
    string y="bcda";

    cout<<x.compare(y)<<endl;
    // When x[0]<y[0] -1
    // WHen x[0]>y[0] 1
    // FInd func important
    string sentence="Or bro kya haal chaal?";
    string target="Nalla";
    cout<<sentence.find(target);
    // Give us the starting index of the target value
    if(sentence.find(target)== string::npos)
    {
        cout<<"Not found;"<<endl;
    }
       // Replace ?
    string str1="This is My First Message";
    string word1="Babbar";
    cout<<str1.replace(11,5,word1);//First kis index se replace krna, Second argument kitne tak hatana hai
    cout<<endl;
    // Important erase important
    str1.erase(0,4);
    cout<<str1;
}