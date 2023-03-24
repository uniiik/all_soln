class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size();
        if(size==1) return nums[0];
        int e=nums[0];
        int ec=1;
        for(int i=1;i<size;i++){
            if(nums[i]==e) ec++;
            else if(ec==0) {e=nums[i];ec=1;}
            else ec--;

        }
        return e;

    }
};