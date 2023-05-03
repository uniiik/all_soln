class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
         unordered_set<int> set2;
        vector<vector<int>>answer;
        vector<int> result; vector<int> result1;
        
        for(auto x:nums1){
            set1.insert(x);
        }
        for(auto x:nums2){
            set2.insert(x);
        }
        
       
        
        for(auto x:set1){
            if(set2.find(x)!=set2.end()){
                continue;
            }
            else
                result.push_back(x);
        }
        answer.push_back(result);
        for(auto x:set2){
            if(set1.find(x)!=set1.end()){
                continue;
            }
            else
                result1.push_back(x);
        }
         answer.push_back(result1);
        
        
        
        return answer;
        
    }
};