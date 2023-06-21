#include <bits/stdc++.h>

using namespace std;

int findMin(int array[], int size, int start){
    int min=array[start];
    int index=start;
    for(int i=start;i<size;i++){
        if(min>array[i]){
            min=array[i];
            index=i;
        }
    }

    return index;
}
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }

    cout<<"\n";
}

void selectionSort(int array[], int size){
    int currentPosition=0;
    int minIndex;

    for(int i=0;i<size-1;i++){
        minIndex=findMin(array,size,i);

        swap(array[minIndex],array[currentPosition]);
        currentPosition++;
    }
}

int countCost(int array[],int n){
    int count=0;

    for (int i = 0; i < n / 2; i++)
    {
        count += abs(array[i] - array[n - i - 1]);
    }

    return count;
}

int main(int argc, char const *argv[])
{
    int t;

    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int array[n];

        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        selectionSort(array,n);
        cout<<countCost(array,n)<<endl;
    }
}
