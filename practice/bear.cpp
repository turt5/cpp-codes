// Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

// Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

// Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

// After how many full years will Limak become strictly larger (strictly heavier) than Bob?

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;

    cin>>a>>b;

    int count=0;

    while(a<=b){
        a*=3;
        b*=2;

        count++;
    }

    cout<<count;
}