#include<iostream>

using namespace std;

int linearSearch(int array[], int size, int start, int element){
    int l=start;

    if(l>=size){
        return -1;
    }

    if(array[l]==element){
        return l;
    }


    return linearSearch(array,size,l+1,element);
}

int binarySearch(int array[], int size, int element){
    int l=0;
    int r=size-1;

    while(l<=r){
        int mid=(l+r)/2;

        if(array[mid]==element){
            return mid;
        }else if(array[mid]>element){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }

    return -1;
}

int main(){
    int array[10]={0,1,2,3,4,5,6,7,8,20};

    int size=10;

    cout<<binarySearch(array,size,0)<<endl;
    cout<<linearSearch(array,size,0,20)<<endl;
}