#include <iostream>
using namespace std;

int getMinMissingElement(int array[], int size){
    int low = 0;
    int high = size - 1;
    int mid;
    while(low <= high){
        mid = low + (high - low) / 2;
        if(array[mid] == mid){
            low = mid + 1;
        }else{
            if(mid == 0 || array[mid-1] == mid-1){
                return mid;
            }
            high = mid - 1;
        }
    }
    return -1; // if no missing elements
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int array[n];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    cout << "The smallest missing element is " << getMinMissingElement(array,n) << endl;
    return 0;
}
