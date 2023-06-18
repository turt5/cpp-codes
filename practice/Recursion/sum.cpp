//Write a program in C to calculate the sum of numbers from 1 to n using recursion.

#include<bits/stdc++.h>
using namespace std;

int calculateSum(int n){
    
    if(n==1){
        return 1;
    }else{
        return n+calculateSum(n-1);
    }
}
int main(){
    int n;

    cin>>n;
    int sum=calculateSum(n);

    cout<<sum;
    return 0;
}