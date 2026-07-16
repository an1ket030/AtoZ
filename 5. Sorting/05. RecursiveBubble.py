def recursive_bubble_sort(arr, n):

    # Base case
    if n == 1:
        return

    # One Bubble Sort pass
    for i in range(n - 1):
        if arr[i] > arr[i + 1]:
            arr[i], arr[i + 1] = arr[i + 1], arr[i]

    # Recursive call
    recursive_bubble_sort(arr, n - 1)


# Example
arr = [64, 25, 12, 22, 11]

recursive_bubble_sort(arr, len(arr))

print(arr)