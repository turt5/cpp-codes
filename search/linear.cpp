#include <iostream>

using namespace std;

struct Data
{
    int frequencies;
    int indexes[100];
};

typedef struct Data Data;

Data search(int array[], int n, int element)
{

    Data d1;
    d1.frequencies = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == element)
        {
            d1.indexes[d1.frequencies] = i;
            d1.frequencies++;
        }
    }

    return d1;
}

int main()
{

    int n;
    cin>>n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int element;
    cin >> element;

    Data data;

    data = search(array, n, element);

    for (int i = 0; i < data.frequencies; i++)
    {
        cout << data.indexes[i] << "  ";
    }
}
