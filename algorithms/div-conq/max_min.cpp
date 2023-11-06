#include <bits/stdc++.h>
using namespace std;

class Result
{
public:
    int min;
    int max;
};

Result getResult(int array[], int left, int right)
{
    Result r;
    if (left == right)
    {
        // single element
        r.min=r.max = array[left];
        return r;
    }else if(left+1==right){
        // two element;

        if(array[left]>array[right]){
            r.max = array[left];
            r.min = array[right];
        }else{
            r.max = array[right];
            r.min = array[left];
        }

        return r;
    }else{
        // more than two elements
        int mid = (left + right) / 2;
        Result me = getResult(array, left, mid);
        Result friend_ = getResult(array, mid + 1, right);

        if(me.max>friend_.max){
            r.max = me.max;
        }else{
            r.max = friend_.max;
        }

        if (me.min < friend_.min)
        {
            r.min = me.min;
        }
        else
        {
            r.min = friend_.min;
        }

        return r;
    }
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n;i++){
        cin >> array[i];
    }

    Result r = getResult(array, 0, n - 1);

    cout << "Max: " << r.max<<endl;
    cout << "Min: " << r.min << endl;
}