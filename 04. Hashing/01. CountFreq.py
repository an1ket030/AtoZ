def count_frequency(nums):

    freq = {}

    for i in nums:
        freq[i] = freq.get(i, 0) + 1

    ans = []

    for key, value in freq.items():
        ans.append([key, value])

    return ans


nums = [1, 2, 2, 1, 3]

print(count_frequency(nums))