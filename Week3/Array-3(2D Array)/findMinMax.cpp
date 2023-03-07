#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[][3],int row,int col)
{
    int maxi=INT_MIN;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>maxi)
            {
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}

int findMin(int arr[][3],int row,int col)
{
    int mini=INT_MAX;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]<mini)
            {
                mini=arr[i][j];
            }
        }
    }
    return mini;
}

int main()
{
    int arr[3][3]={{5,6,9},{7,1,2},{-10,3,12}};
    int row=3,col=3;
    int maxValue=findMax(arr,row,col);
    int minValue=findMin(arr,row,col);
    cout<<"Max Value in 2D array is="<<maxValue<<endl;
    cout<<"Min Value in 2D array is="<<minValue<<endl;
}