class Solution:
    def backtrack(self, nums, result, temp):
        if len(temp) == len(nums):
            result.append(temp[:])
            return 
        for i in range(len(nums)):
            if nums[i] in temp:
                continue
            
            temp.append(nums[i])
            self.backtrack(nums, result, temp)
            temp.pop()

    def permute(self, nums):
        self.result = []
        self.temp = []
        self.backtrack(nums, self.result, self.temp)
        return self.result
