#include<iostream>
using namespace std;

void columnWiseSum(int arr[][2],int size)
{
  for(int i=0;i<size;i++)
    {
        int colSum=0;
        
        for(int j=0;j<size;j++)
        {
            colSum=colSum+arr[j][i];
        }
        cout<<"Col sum on "<<i<<"th Col is="<<colSum<<endl;
    }  
}

int main()
{
    int arr[2][2]={
        {1,2},
        {3,4}};
    int size=2;
    for(int i=0;i<size;i++)
    {
        int rowSum=0;
        for(int j=0;j<size;j++)
        {
            rowSum=rowSum+arr[i][j];
        }
        cout<<"Row sum on "<<i<<"th row is="<<rowSum<<endl;
    }
    columnWiseSum(arr,size);
}