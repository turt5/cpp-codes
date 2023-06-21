#include<bits/stdc++.h>
using namespace std;

int findCost(int k, int w){
    int cost=0;

    for(int i=1;i<=w;i++){
        cost+=i*k;
    }

    return cost;
}

int main(){
    int k;
    int n;
    int w;

    cin>>k>>n>>w;

    int totalCost=findCost(k,w);
    int borrow=max(0,totalCost-n);

    cout<<borrow;

}