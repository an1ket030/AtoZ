#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {

    vector<int> leftPart(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightPart(arr.begin() + mid + 1, arr.begin() + right + 1);

    int i = 0;
    int j = 0;
    int k = left;

    while (i < leftPart.size() && j < rightPart.size()) {

        if (leftPart[i] <= rightPart[j]) {
            arr[k] = leftPart[i];
            i++;
        }
        else {
            arr[k] = rightPart[j];
            j++;
        }

        k++;
    }

    while (i < leftPart.size()) {
        arr[k] = leftPart[i];
        i++;
        k++;
    }

    while (j < rightPart.size()) {
        arr[k] = rightPart[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {

    if (left >= right)
        return;

    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main() {

    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    mergeSort(arr, 0, arr.size() - 1);

    for (int x : arr)
        cout << x << " ";

    return 0;
}