#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{1,2,1,3,2};
    int ans=0;
    for(auto value:arr)
    {
        ans=ans ^ value;
        cout<<"Ans="<<ans<<" "<<endl;
    }

}