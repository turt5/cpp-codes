#include<bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int left, int right, int key){
    if(left>right){
        return -1;
    }else if(left==right){
        if(array[left]==key){
            return left;
        }else return -1;
    }else{
        int mid=(left+right)/2;
        int res1=binarySearch(array,left,mid,key);
        int res2=binarySearch(array,mid+1,right,key);

        if(res1==-1 && res2==-1){
            return -1;
        }else if(res1==-1){
            return res2;
        }else return res1;
    }
}

int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int key;
    cin>>key;

    cout<<binarySearch(array,0,n-1,key)<<endl;;
}