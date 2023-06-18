#include<iostream>
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

    cout<<"\n";
}

void insertionSort(int array[], int size){
    for(int i=1;i<size;i++){
        int key=array[i];
        int j=i-1;

        while(j>=0 && array[j]>key){
            swap(array[j],array[j+1]);
            j--;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int array[n];
        
        for(int i=0;i<n;i++){
            cin>>array[i];
        }

    insertionSort(array, n);
    printArray(array,n);

    return 0;
}
