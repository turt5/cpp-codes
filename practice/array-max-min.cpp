#include <iostream>
using namespace std;

typedef struct Result_SET
{
    int max;
    int min;
} Results;

Results findMaxMin(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    Results rs;
    rs.max = max;
    rs.min = min;

    return rs;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    Results rs;
    rs = findMaxMin(array, n);

    cout << "MAX: " << rs.max << endl;
    cout << "MIN: " << rs.min << endl;

    return 0;
}
