class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen={}
        for i ,j in enumerate(nums):
            number=target-nums[i]
            if number in seen:
                return [i,seen[number]]
            seen[j]=i
        return []
                