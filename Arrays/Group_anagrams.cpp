#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;
    bool isAnagram(string a, string b){
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        return a == b;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //brute force approach
        vector<vector<string>> result;
        vector<bool> visited(strs.size(),false);
        for(int i=0; i < strs.size(); i++){
            vector<string> group;
            if(visited[i] == true)
                continue;
            group.push_back(strs[i]);
            visited[i] = true;


            for(int j = i+1; j < strs.size(); j++){
                if(!visited[j] && isAnagram(strs[i], strs[j]))
                    {
                        group.push_back(strs[j]);
                        visited[j] = true;
                    }
            }
            result.push_back(group);
        }
        return result;
    }

    int main(){
        vector<string> strs = {"act","pots","tops","cat","stop","hat"};
        groupAnagrams(strs);
        
        return 0;
    }