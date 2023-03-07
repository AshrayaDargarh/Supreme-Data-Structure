#include<iostream>
// #include<string.h>
using namespace std;

// What is String?
// Seq of Char but also inside char arrya we stored multiple characters but both are not same

// What is the difference?
// In character array humne ek array create kra hai jisme har ek variable character type ka hoga
// and String ek datatype hai. Data string type ka hoga.
// So Char array is a data structure and String is a datatype

// Hum character array bhut jayda use nhi krte instead we use strings always

// string str;
// cin>>str "Babbar"
// Memory mai kya hoga
// ['B'|'a'|'b'|'b'|'a'|'r'|\0(Null Char)|]
// But we can't access it(Null Char).

//Differece b/w String and Arrays
// try this code for both [B,a,\0,b,b,a,\0,r] print
int main()
{
 string str;
 getline(cin,str);
 cout<<str.length();
 cout<<endl;
cout<<str.empty();
 cout<<endl;
 str.push_back('A');
 cout<<str;
 cout<<endl;
 str.pop_back();
 cout<<str;
 cout<<endl;
//  SubString Very Important It works accourding to the length Not Index
cout<<str.substr(1,6);
 cout<<endl;
// It doesm't affect the orignal string

// Compare 3 ouputs
// 1-> equal to 0, 2-> <0, 3-> >0 

    

}

