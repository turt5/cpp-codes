#include<bits/stdc++.h>
using namespace std;
#define NOT_SET -1
long long int cache[1007];

int fibDP(long long int n){

    if(cache[n]!=NOT_SET){
        return cache[n];
    }
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        long long int result=fibDP(n-1)+fibDP(n-2);
        cache[n]=result;
        return result;
    }
}

int fib(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int n;
    cin>>n;

    memset(cache,NOT_SET,sizeof(cache));


    // for(int i=0;i<1007;i++) {
    //     // cout<<"Index "<<i<<" :"<<cache[i]<<endl;
    //     cout<<cache[i]<<" ";
    // }
    // cout<<endl;

    cout<<"Running Program..."<<endl;
    cout<<n<<"th number of the fibonacci series: "<<fibDP(n)<<endl;
}
