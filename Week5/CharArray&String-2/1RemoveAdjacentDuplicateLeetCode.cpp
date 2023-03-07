#include<iostream>
using namespace std;
// 0 1 2 3 4 5
// a|z|x|x|z|y
// empty string 
// ans=""
// "a","az","azx" when we check on Index 3rd  

int main()
{
    // string s="azxxzy";
    string s="abbaca";
    string ans="";
    int i=0;
    while (i<s.length())
    {
        // Drive run when s is empty
        if(ans[ans.length()-1]==s[i])
        {
            ans.pop_back();
            i++;
        }
        else
        {
            ans.push_back(s[i]);
            i++;
        }
    }
    cout<<"Final Ans="<<ans;
    
}