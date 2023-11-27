//{2, 3}      
//{12, 30}   
//{40, 50},  
// {5, 1},    
// {12, 10},
// {3, 4}; 


#include<bits/stdc++.h>
using namespace std;

class Pair{
    public:
    int x;
    int y;

    Pair(){}
    Pair(int x, int y){
        this.x=x;
        this.y=y;
    }
};


int main(){
    int n;
    cin>>n;

    vector<Pair> pairs;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        pairs.push_back(Pair(x,y));
    }
}