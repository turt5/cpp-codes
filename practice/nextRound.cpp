#include<iostream>
using namespace std;

int check(int a[], int n, int k){
    int count=0;

    for(int i = 0; i < n; i++) {
        if(a[i] >= a[k-1] && a[i] > 0) {
            count++;
        }
        else {
            break;
        }
    }

    return count;

}

int main(){
    int n,k;

    cin>>n>>k;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }


    cout<<check(array,n,k)<<endl;
}