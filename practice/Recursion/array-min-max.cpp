#include <iostream>
using namespace std;

int maxElement(int array[], int n)
{
    static int start = 0;
    static int max = array[0];

    if (start < n)
    {
        if (array[start] > max)
        {
            max = array[start];
        }
        start++;
        maxElement(array, n);
    }
    
    return max;
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

    cout << "MAX: " << maxElement(array,n)<<endl;

    return 0;
}
