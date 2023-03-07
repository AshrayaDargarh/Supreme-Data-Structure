#include<iostream>
using namespace std;

// WHy? In daynamic memory allocation we will need pointer.
// Memory allocation, memmory management, func mai array by ref kyu?
// Ek fun jab dusre fun pass krte hai tb use hota hai
int main()
{
    // int *pr;
    // cout<<*pr;// Garbage value
    // Hum yaha pr ek eshi memory ko access krne ki koshish kr rhe hai jo ya to exist nhi krti ya fir humare alloted space se
    // bahar padhi hai to segmaintaion fault;
    // So it is a bad practice to declare the pointer like this.
    // Suppose mujhe 0-100 tk ki memory access krne ki persmission hai and mai 200 ko access krne ki koshish krunga to I will get segmention
    // fault.
    // Using 'null pointer' we can correct this. 
    int *ptr=0; 
    cout<<*ptr;
    // or *ptr=nullptr
    
}