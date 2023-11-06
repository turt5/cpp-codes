#include<bits/stdc++.h>
using namespace std;

void print(int array[], int n){
    for (int i = 0; i < n;i++){
        if(i==n-1){
            //last element
            cout << array[i] << endl;
        }else{
            cout << array[i] << ", ";
        }
    }
}

void merge(int array[], int left, int mid, int right){
    int size1 = (mid - left) + 1;
    int size2 = (right - (mid + 1)) + 1;

    int array1[size1];
    int array2[size2];

    for (int i = 0; i < size1;i++){
        array1[i] = array[left + i];
    }

    for (int i = 0; i < size2;i++){
        array2[i] = array[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;

    while(i<size1 && j<size2){
        if(array1[i]<array2[j]){
            array[k] = array1[i];
            i++;
        }else{
            array[k] = array2[j];
            j++;
        }
        k++;
    }

    while(i<size1){
        array[k] = array1[i];
        i++;
        k++;
    }

    while(j<size2){
        array[k] = array2[j];
        j++;
        k++;
    }
}


void divide(int array[], int left, int right){
    if(left>=right){
        return;
    }else{
        int mid = (left + right) / 2;
        divide(array, left, mid);
        divide(array, mid + 1, right);
        merge(array, left, mid, right);
    }
}

int main(){
    int n;
    cin >> n;
    
    int array[n];
    for (int i = 0; i < n;i++){
        cin >> array[i];
    }

    cout << "Before sort: " << endl;
    print(array, n);

    cout << "After sort: " << endl;
    divide(array, 0, n - 1);
    print(array, n);
}