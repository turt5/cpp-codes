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