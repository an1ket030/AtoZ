#Approach 1 (TempArray)
class Solution:
    def rotateArray(self, nums, k):
        n = len(nums)
        k = k % n
        temp = [0] * n
        for i in range(k, n):
            temp[i - k] = nums[i]
        for i in range(k):
            temp[n - k + i] = nums[i]
        for i in range(n):
            nums[i] = temp[i]


#Approach 2 (Reverse)
class Solution:
    def reverse(self, nums, start, end):
        while start < end:
            nums[start], nums[end] = nums[end], nums[start]
            start += 1
            end -= 1

    def rotateArray(self, nums, k):
        n = len(nums)
        k = k % n
        self.reverse(nums, 0, k - 1)
        self.reverse(nums, k, n - 1)
        self.reverse(nums, 0, n - 1)