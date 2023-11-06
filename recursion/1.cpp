#include<iostream>
using namespace std;

void printNumbers(int i, int n){
    if(i>n){
        return;
    }

    cout<<i<<" ";
    printNumbers(i+1,n);
}

int main(){
    int n;
    cin>>n;

    printNumbers(1,n);
}