#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{1,2,3,4,6,7,8};
    int s=0,e=arr.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        int element=arr[mid];
        if(element-1==arr[mid-1])
        {
            s=mid+1;
        }
        else if(element-1!=arr[mid-1])
        {
            ans=arr[mid]-1;
            break;
        }
        else if(element+1!=arr[mid+1])
        {
            ans=arr[mid]+1;
            break;
        }
        mid=s+(e-s)/2;
    }
    cout<<"Missing Element="<<ans;

}