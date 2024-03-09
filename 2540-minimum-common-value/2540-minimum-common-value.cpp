class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        for(int i=0;i<nums1.size();i++){
            set1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            if(set1.find(nums2[i])!=set1.end())
                return nums2[i];
        }
        return -1;
    }
};