#include <iostream>
#include <algorithm>

using namespace std;

int binarySearchFirstOccurrence(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < target)
            low = mid + 1;
        else if (arr[mid] >= target)
            high = mid - 1;
    }

    return low;
}

int binarySearchLastOccurrence(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= target)
            low = mid + 1;
        else if (arr[mid] > target)
            high = mid - 1;
    }

    return high;
}

void findFrequencyOfPositiveIntegers(int arr[], int size, int target) {
    sort(arr, arr + size); // Sort the array in ascending order

    static int previousTarget = -1;  // Initialize previousTarget with a value that won't appear in the array
    if (target == previousTarget) {
        return;  // Skip the current iteration if the target is the same as the previous target
    }
    previousTarget = target;  // Update the previousTarget

    int firstOccurrence = binarySearchFirstOccurrence(arr, 0, size - 1, target);
    int lastOccurrence = binarySearchLastOccurrence(arr, 0, size - 1, target);

    int frequency = lastOccurrence - firstOccurrence + 1;
    if (frequency > 1) {
        cout << "Number " << target << ": " << "Count: " << frequency << endl;
    }
}


int main() {
    int arr[] = {-2, -1, 1, 2, 2, 2, 3, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<size;i++){
        findFrequencyOfPositiveIntegers(arr,size,arr[i]);
    }

    return 0;
}
