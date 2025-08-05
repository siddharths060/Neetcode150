#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

/*
bool isAnagram(string s, string t) {

        // brute force method 
        // Time Complexity = O(N) + O(N log N) + O(N log N) => O(N log N)
        // Space Complexity = O(1)
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s.size() != t.size()){
            return false;

        }

        for(int i = 0; i < s.size(); i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }


*/

/*
  bool isAnagram(string s, string t) {

        // optimal method : using maps to keep track of the frequency
        // cons: utilized two maps
        // Time Complexity = O(N) + O(N) => O(N)
        // Space Complexity = O(N) + O(N) => O(N)

        if(s.size() != t.size())
            return false;
        
        
        unordered_map<char,int> mps;
        unordered_map<char,int> mpt;
        for(int i = 0; i < s.size() ; i++){
            mps[s[i]]++;
            mpt[t[i]]++;
        }
        
        for(int i = 0; i < s.size(); i++){
            if(mps[s[i]] != mpt[s[i]]){
                return false;
            }
        }
        return true;
    }
*/

bool isAnagram(string s, string t) {

        // optimal method : using maps to keep track of the frequency
        // Time Complexity = O(N) + O(N) => O(N)
        // Space Complexity = O(N) + O(N) => O(k), where k is the unique set of characters
        // in this a-z ie, 26 characters

        if(s.size() != t.size())
            return false;
        
        
        unordered_map<char,int> mps;
        for(int i = 0; i < s.size() ; i++){
            mps[s[i]]++;
            mps[t[i]]--;
        }
        
        for(int i = 0; i < s.size(); i++){
            if(mps[s[i]] != 0){
                return false;
            }
        }
        return true;
    }
int main(){
    string s = "racecar";
    string s1 = "carrace";
   cout<<isAnagram(s,s1)<<endl;
   
   

    return 0;
}