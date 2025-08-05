/*
Brute Force method 
for(int i=0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                return {i,j};
            }

        }
       }
       return {};
        
    }
*/
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       sort(nums.begin(), nums.end());
       int  i = 0, j = nums.size() -1;
        while(i < j){
            if(target - nums[i] == nums[j]){
                return {i,j};
            }
            if(target - nums[i] < nums[j]){
                j--;
            }
            if(target - nums[i] > nums[j]){
                i++;
            }
            
        }
        return {};
    }
};


*/
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        //optimal approach using maps
        unordered_map<int,int> mp;
        for(int i =0; i < nums.size(); i++)
        {
            if(mp.find(target-nums[i]) != mp.end())
            {   
                return {mp[target-nums[i]],i};
            }
            mp[nums[i]] = i; 
            
            }
        return {};
       
    }

int main(){
    vector<int> nums = {3,4,5,6};
    int target;
    cin>>target;
    twoSum(nums,target);
    return 0;

}