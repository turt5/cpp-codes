#include<iostream>
using namespace std;

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }

    cout<<"\n";
}

void bubbleSort(int array[], int size){
    
    for(int bl=size-2;bl>=0;bl--){
        for(int i=0;i<=bl;i++){
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
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

    bubbleSort(array,n);
    printArray(array,n);

    return 0;
}
