//Write a program in C to count the digits of a given number using recursion.

#include<bits/stdc++.h>
using namespace std;

int countDigit(int number){
    

    if(number<=0){
        return 0;
    }else{
        return 1+countDigit(number/10);
    } 
}

int main(){
    int n;

    cin>>n;
    cout<<countDigit(n);

    return 0;
}


/*

50%10
*/