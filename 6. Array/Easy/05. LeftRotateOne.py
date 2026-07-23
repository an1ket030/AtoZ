class Solution:
    def rotateArray(self, nums):
        n = len(nums)
        if n == 0:
            return
        first = nums[0]
        for i in range(n - 1):
            nums[i] = nums[i + 1]
        nums[n - 1] = first