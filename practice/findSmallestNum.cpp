#include<iostream>
using namespace std;

int searchMissingNum(int array[], int size) {
    int l = 0;
    int r = size - 1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (array[mid] != mid) {
            if (mid == 0 || array[mid - 1] == mid - 1) {
                return array[mid-1];
            }
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return size; // If no missing number found, return size as the smallest missing non-negative element
}

int main()
{
    int n;

    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }


    cout<<searchMissingNum(array,n);
}