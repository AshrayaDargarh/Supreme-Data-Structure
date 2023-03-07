#include<iostream>
using namespace std;

bool findKey(int arr[][3],int row,int col,int key)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3];
    int row=3,col=3;
    cout<<"Enter the element "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++ )
        {
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"Enter the element you want to find ";
    cin>>key;
    if(findKey(arr,row,col,key))
    {
        cout<<"Key Found";
    }
    else{
        cout<<"Key Not Found";
    }
}