#include<iostream>

using namespace std;

int printArray(int array[], int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<"  ";
    }
}

int findMax(int array[], int size){
    int max=array[0];
    for(int i=0;i<size;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    return max;
}

// 1 4 1 2 7 5 2

void countingSort(int a[], int size){

    int max=findMax(a,size);

    int c[max];

    for(int i=0;i<max;i++){
        
    }
}

int main(){
    int n;
    
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }



}