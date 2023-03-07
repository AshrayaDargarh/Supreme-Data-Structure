# Address
## Base Address
arr[0]
cout<<arr; //Base Address of arr
cout<<&arr; // Base address
to print base address-> &arr[0] //Base Address of arr
int *p=arr;
cout<<p<<endl; // Adress if arr
cout<<&p<<endl; // Address of pointer p;


## What happen whne int arr[0]

arr-> 104(base address) to show krta hai,&arr(symbol table ki bjh se) both are same base address
int arr[10];
// arr-> starting address ko (base address)
// &arr->base address
int *p=arr;
p[address of arr]
&p-> address of pointer p

*arr-> 5 value inside the base address of array(bcs arr has base balue which can access through pointer)
*arr+1-> 6
*(arr)+1-> 6
*(arr+1)-> (Next Index value)[1]
*(arr+2)-> (Next Index value)[2]
*(arr+3)->(Next Index value)[3]
*(arr+1) or arr[i] same
i[arr]-> *(i+arr) No error

// Stack memory mai Hum limited array hi create kar skte hai
// That's why hum pointer array ka use krenge

## Can We change base address?
> arr=arr+2;
// We will get an error.
// Why? -> bcs symbol table ke andar ki entry or value change nhi kr skte that's why we are getting the error
>
but using pointer we can do this
int *ptr=arr; // We dont need to put &.
*(p+2)


## Question
> int arr[4]={}
int *p=arr;
int *q=arr;
&arr->104
arr[0]-> 5
&arr[0]->104
p->104
&p->208
*p->5
q->
&q
*q
*(p)+1// Bcs memory ke andr address ko change kr skte hai but arr+1 not possible
*(p)+2

cout<<sizeof(p)<<endl; // 8 Bit
cout<<sizeof(*p)<<endl; // 4 Bit for integer

> arr+1->108, arr+3->116, arr+5->124
We can print arr+1 but we can not modify it like arr=arr+1; Symbol table mai value modify nhi kr skte
// *p=arr+1 -> yes p->108 possible

## Character array

> char ch[10]="Babbar"
char *c=ch;
cout<<c<<endl; // Print Babbar But why?
// Cout ki implementation char ke liye alag hai.
for int * address, for char * display whole 