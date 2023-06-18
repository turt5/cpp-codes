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

int binarySearch(int array[], int size, int element){
    int left=0;
    int right=size-1;


    while(left<=right){
        int mid=(left+right)/2;

        if(element==array[mid]){
            return mid;
        }
        else if(element<array[mid]){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int n=10;

    int array[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<binarySearch(array,n,1);
}
