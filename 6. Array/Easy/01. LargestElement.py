 def largestElement(self, nums):
        maxval = nums[0]
        for i in range(1, len(nums)):
            if nums[i] > maxval:
                maxval = nums[i]
        return maxval