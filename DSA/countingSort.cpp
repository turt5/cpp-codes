#include <iostream>
using namespace std;

int findMax(int array[], int size)
{
    int max = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }

    cout << "\n";
}

void countingSort(int array[], int size)
{
    int max = findMax(array, size);
    // cout<<max<<endl;

    int c[max + 1] = {0};

    cout<<"C array at initial state: "<<endl;
    printArray(c, max + 1);
    cout << "\n";

    for (int i = 0; i < size; i++)
    {
        c[array[i]]++;
    }
    cout<<"C array after counting values: "<<endl;
    printArray(c, max + 1);
    cout << "\n";

    for (int i = 0; i < size; i++)
    {
        int temp = c[i + 1];
        c[i + 1] = c[i] + temp;
    }

    cout<<"C array after cumulative sum: "<<endl;
    printArray(c, max + 1);
    cout << "\n";

    
    int b[size];
    for(int i=size-1;i>=0;i--){
        int elementA = array[i];
        int indexC = elementA;
        int indexB = --c[indexC];
        b[indexB] = elementA;

    }
    cout<<"C array after counting sort: "<<endl;
    printArray(b,size);
    cout << "\n";
}

int main()
{
    int n = 8;
    int array[8] = {2, 5, 3, 0, 2, 3, 0, 3};

    countingSort(array, n);
}