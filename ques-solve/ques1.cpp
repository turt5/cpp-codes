/*
Given an array of integers. Write a program to calculate the product of a
particular number and its previous number using linear search.
Sample Input: [1, 4, 5, 7, 8, -2, 6, 0, 19, -15]
Number: 5
Output : 5 * 4 = 20

*/


#include <iostream>

using namespace std;

bool exists(int array[], int size, int element){
    for(int i=0;i<size;i++){
        if(array[i]==element){
            return true;
        }
    }

    return false;
}


int getProduct(int array[], int size, int element){
    int index;
    for(int i=0;i<size;i++){
        if(array[i]==element){
            index=i;
            break;
        }
    }

    int prevIndex=index-1;

    return array[index]*array[prevIndex];
}


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int array[n];
        
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int element;
    cin>>element;


    if(exists(array,n,element)){
        cout<<"Product: "<<getProduct(array,n,element)<<endl;
    }else{
        cout<<"Element not found";
    }
    return 0;
}
