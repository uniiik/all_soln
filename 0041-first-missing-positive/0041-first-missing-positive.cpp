class Solution {
public:
int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();
    bool flag = false;

    // Check if 1 is present in the array or not
    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            flag = true;
            break;
        }
    }
    if (!flag) {
        return 1;
    }

    // Mark non-positive and out-of-range elements with a special value (e.g., 1)
    for (int i = 0; i < n; i++) {
        if (nums[i] <= 0 || nums[i] > n) {
            nums[i] = 1;
        }
    }

    // Use the array indices as a hash table to mark present elements
    for (int i = 0; i < n; i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            return i + 1;
        }
    }

    return n + 1;
}

};