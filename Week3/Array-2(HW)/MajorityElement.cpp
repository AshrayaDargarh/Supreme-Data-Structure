#include<iostream>
#include<vector>
using namespace std;

void findMajority(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        int count=0;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]==arr[j])
            {
              cout<<  count++;
            }
        }
    }
}
int main()
{
    vector<int> nums{2,1,1,2,2,1,2};
    
    // findMajority(arr);
    int countMajority = nums.size()/2;
    int ans;
        for(int i=0;i<nums.size();i++){
            int count = 0;
            // cout<<"Outer Loop="<<nums[i];
            // cout<<endl;
            for(int j=0;j<nums.size();j++){
                if(nums[i] == nums[j]){
                    count++;
                }
                // cout<<" Inner Loop="<<nums[j];
            }
            // cout<<endl;
            if(count > countMajority){
                 ans=nums[i];
            }
        }
        cout<<ans;
    
}