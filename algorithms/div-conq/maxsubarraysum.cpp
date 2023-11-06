#include<bits/stdc++.h>
using namespace std;

class Result{
    public:
    int leftIndex;
    int rightIndex;
    int sum;
};


Result crossing(int array[], int left, int mid, int right){
    //left side
    int leftIndex=mid;
    int leftSubSum = array[mid];
    int leftSum = array[mid];

    for (int i = mid - 1; i >= left;i--){
        leftSum += array[i];

        if(leftSum>leftSubSum){
            leftSubSum = leftSum;
            leftIndex = i;
        }
    }


    //right side
    int rightIndex = mid + 1;
    int rightSubSum = array[mid + 1];
    int rightSum = array[mid + 1];

    for (int i = mid + 2; i <= right;i++){
        rightSum += array[i];

        if(rightSum>rightSubSum){
            rightSubSum = rightSum;
            rightIndex = i;
        }
    }

    // crossing sum and index;
    Result r;
    r.leftIndex = leftIndex;
    r.rightIndex = rightIndex;
    r.sum = leftSubSum + rightSubSum;

    return r;
}

Result getMaxSubarray(int array[], int left, int right){
    

    if(left==right){
        Result r;
        r.leftIndex = left;
        r.rightIndex = right;
        r.sum = array[left];
        return r;
    }else{
        int mid = (left + right) / 2;
        Result leftSubarray = getMaxSubarray(array, left, mid);
        Result rightSubarray = getMaxSubarray(array, mid + 1, right);
        Result crossSubarray = crossing(array, left, mid, right);


        if(leftSubarray.sum>=rightSubarray.sum && leftSubarray.sum>=crossSubarray.sum){
            return leftSubarray;
        }else if(rightSubarray.sum>=leftSubarray.sum && rightSubarray.sum>=crossSubarray.sum){
            return rightSubarray;
        }else
            return crossSubarray;
    }
}

int main(){
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n;i++){
        cin >> array[i];
    }

    int left = 0;
    int right = n - 1;

    Result r = getMaxSubarray(array, left, right);

    cout << endl;
    cout << "Subarray that contains max sum:" << endl;
    for (int i = r.leftIndex; i <= r.rightIndex;i++){
        if(i==r.rightIndex){
            cout << array[i] << endl;
        }else{
            cout << array[i] << ", ";
        }
    }
    cout << endl;

    cout << "Max sum: " << r.sum << endl;
}