//Write a program in C to print the first 50 natural numbers using recursion.

#include<bits/stdc++.h>
using namespace std;

void naturalNumbers(int k){
    if(k<=50){
        cout<<k<<",";
        naturalNumbers(k+1);
    }
}

int main(){
    int n=1;

    naturalNumbers(n);
    return 0;
}