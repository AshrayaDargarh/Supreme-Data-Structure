#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    vector<int> a{2,4,6,8};
    vector<int> b{1,3,7};
    vector<int> ans;
    for(int i=0;i<a.size();i++)
    {
        ans.push_back(a[i]);
    }
    
        for(int j=0;j<b.size();j++)
        {
        ans.push_back(b[j]);
             
        }
        int n=ans.size();
        sort(ans.begin(), ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

}