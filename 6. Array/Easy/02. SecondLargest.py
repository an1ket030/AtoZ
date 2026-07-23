class Solution:
    def secondLargestElement(self, nums):
        largest = float('-inf')
        secondLargest = float('-inf')
        for num in nums:
            if num > largest:
                secondLargest = largest
                largest = num
            elif num < largest and num > secondLargest:
                secondLargest = num
        return -1 if secondLargest == float('-inf') else secondLargest