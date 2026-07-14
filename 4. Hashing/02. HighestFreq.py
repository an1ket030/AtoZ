def highest_frequency(nums):

    visited = []
    max_freq = 0
    ans = nums[0]

    for i in nums:

        if i in visited:
            continue

        count = 0

        for j in nums:
            if j == i:
                count += 1

        if count > max_freq:
            max_freq = count
            ans = i

        elif count == max_freq and i < ans:
            ans = i

        visited.append(i)

    return ans


nums = [4, 4, 5, 5, 6]

print(highest_frequency(nums))