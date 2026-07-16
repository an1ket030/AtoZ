def recursive_insertion_sort(arr, n):

    # Base case
    if n <= 1:
        return

    # Sort first n-1 elements
    recursive_insertion_sort(arr, n - 1)

    # Insert last element into the sorted part
    key = arr[n - 1]
    j = n - 2

    while j >= 0 and arr[j] > key:
        arr[j + 1] = arr[j]
        j -= 1

    arr[j + 1] = key


# Example
arr = [64, 25, 12, 22, 11]

recursive_insertion_sort(arr, len(arr))

print(arr)