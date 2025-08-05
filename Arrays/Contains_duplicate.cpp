/*
// Time Complexity = O(N^2) 
// Space Complexity = O(1)

brute force method 

bool hasDuplicate(vector<int>& nums) {
        // brute force method 
        for(int i = 0 ; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }

*/


// another approach is that we can sort the vector then compare the adjacent elements 
// Time Complexity = O(NlogN) 
// Space Complexity = O(1)
// logic : nums[i] == nums[i - 1]
// check for adjacent duplicate elements after sorting


#include<iostream>
#include<vector>
#include<set>
using namespace std;

// optimal approach 
// Time Complexity = O(N) 
// Space Complexity = O(N)

bool hasDuplicate(vector<int>& nums) {
        set<int> st;
        for(int i = 0 ; i < nums.size() ; i++){
            // set.find() returns the iterator to the element if the element is found else returns set.end()
            // basically if set.find(nums[[i]) == st.end(), that means element is not in the set, hence insert it into the set
            // if not it means the element is present in the set hence return true

            if(st.find(nums[i]) != st.end()){
                return true;
            }
            // element is not found
            st.insert(nums[i]);
        }
        return false;
    }

int main(){
    vector<int> nums = {1, 2, 3, 3};
    cout<<hasDuplicate(nums)<<endl;
    // it should return true or 1

    return 0;
}

