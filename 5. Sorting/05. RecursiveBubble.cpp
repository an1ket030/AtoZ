#include <iostream>
#include <vector>
using namespace std;

void recursiveBubbleSort(vector<int>& arr, int n) {

    // Base case
    if (n == 1)
        return;

    // One Bubble Sort pass
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call
    recursiveBubbleSort(arr, n - 1);
}

int main() {

    vector<int> arr = {64, 25, 12, 22, 11};

    recursiveBubbleSort(arr, arr.size());

    for (int x : arr)
        cout << x << " ";

    return 0;
}