#include<iostream>

using namespace std;

int binarySearch(int array[],int size, int element){
    int left=0;
    int right=size-1;

    while(left<=right){
        int mid=(left+right)/2;

        if(element==array[mid]){
            return mid;  // if element found, return the index
        }else if(element>array[mid]){
            left=mid+1;  
        }else{
            right=mid-1;
        }
    }
    return -1; //if element does not found
}

int main(){
    int n;

    cin>>n;

    int array[n];
    cout<<"Enter a sorted array"<<endl;

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int searchElement;

    cin>>searchElement;


    int index;
    index=binarySearch(array,n,searchElement);


    if(index>=0){
        cout<<"Element found at index "<<index<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
}