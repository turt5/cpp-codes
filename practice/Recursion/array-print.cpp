#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int n, int st){

    // check if the starting element is greater than array size or not
    
    if(st>n){
        return ;
    } 
    cout<<array[st]<<", ";
    
    printArray(array,n,st+1);

}

int main()
{
    int n;

    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout<<"Array: ";
    printArray(array,n,0);

    return 0;
}