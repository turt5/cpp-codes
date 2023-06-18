#include <iostream>

using namespace std;

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }

    cout<<"\n";
}

void bubbleSort(int array[], int size)
{
    for (int boundaryLine = size - 2; boundaryLine >= 0; boundaryLine--)
    {
        for (int i = 0; i <= boundaryLine; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap(array[i], array[i + 1]);
            }
        }
    }
}

int binarySearch(int array[], int n, int search)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (search == array[mid])
        {
            return mid;
        }

        else if (search > array[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
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

    bubbleSort(array, n);
    printArray(array, n);

    int numberS;

    cin>>numberS;

    int index=binarySearch(array,n,numberS);

    if(index>=0){
        cout<<"\n"<<numberS<<" Found at index "<<index<<endl;
    }else{
        cout<<"\n"<<numberS<<" Not found in this array"<<endl;
    }
}