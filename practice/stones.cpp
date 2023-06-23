#include <iostream>
#include <string>

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

void selectionSort(int array[], int size){
    int currentPosition=0;
    int minIndex;

    for(int i=0;i<size-1;i++){
        minIndex=findMin(array,size,i);

        swap(array[minIndex],array[currentPosition]);
        currentPosition++;
    }
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

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
