#include<iostream>
using namespace std;

int main()
{
    int arr[3][3]={{2,4,6},{1,3,5},{9,11,13}};
    
    // Swapping Didn't work
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         swap(arr[i][j],arr[j][i]);
    //     }
    // }
    // Store In an another array
    int transpose[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
    cout<<"Transpose Matrix="<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    // Not a good practice
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
}