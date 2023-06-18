#include <iostream>
// #include<bits/stdc++.h>
// #include<string>
// #include<cmath>
// #include<algorithm>
// #include<iomanip>
// #include<queue>
// #include<bitset>
// #include<unordered_map>
// #include<unordered_set>

using namespace std;
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }

    cout << "\n";
}

void insert(int array[], int size, int element)
{
    for(int i=size-2;i>=0;i--){
        if(array[i]>element){
            swap(array[i],array[i+1]);
        }else{
            array[i+1]=element;
            return;
        }
    }
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

    int element;
    cin >> element;


    cout<<"Before insertion: "<<endl;
    printArray(array,n);

    cout<<"After insertion: "<<endl;
    insert(array, n, element);
    printArray(array,n);

    return 0;
}
