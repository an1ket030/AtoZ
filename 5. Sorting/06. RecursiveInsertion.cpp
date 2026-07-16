#include <iostream>
#include <vector>
using namespace std;

void recursiveInsertionSort(vector<int>& arr, int n) {

    // Base case
    if (n <= 1)
        return;

    // Sort first n-1 elements
    recursiveInsertionSort(arr, n - 1);

    // Insert last element
    int key = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = key;
}

int main() {

    vector<int> arr = {64, 25, 12, 22, 11};

    recursiveInsertionSort(arr, arr.size());

    for (int x : arr)
        cout << x << " ";

    return 0;
}