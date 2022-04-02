#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int>&nums, int target)
{
	   unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            
            if(mp.find(target-nums[i])!=mp.end())
            {
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
               break;
            }
                
            
            
            mp[nums[i]]=i;
            
            
        }
        return ans;



}

int main()
{
   vector<int>arr={2,7,11,15};
   int target=9;

   vector<int>v=twoSum(arr,target);

   cout<<v[0]<<" "<<v[1]<<"\n";
}	