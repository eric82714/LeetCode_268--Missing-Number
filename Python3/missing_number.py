class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        if 0 not in nums: return 0
        
        max_num = max(nums)
        
        copy = range(0, max_num + 1)
        
        return max_num+1 if sum(copy) - sum(nums) == 0 else sum(copy) - sum(nums)
