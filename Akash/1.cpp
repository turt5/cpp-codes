//special double


#include<bits/stdc++.h>
#include<set>

#define SIZE 100
using namespace std;

void findSpecialDouble(int array[], int n) {
    int array2[SIZE] = {};

    for (int i = 0; i < n; i++) {
        array2[array[i]]++;
    }

    set<int> uniqueSet;

    for (int i = 0; i < n; i++) {
        if (array2[array[i]] == 2) {
            uniqueSet.insert(array[i]);
        }
    }

    for (auto it = uniqueSet.begin(); it != uniqueSet.end(); ++it) {
        if (next(it) == uniqueSet.end()) {
            cout << *it;
        } else {
            cout << *it << ", ";
        }
    }
}

int main() {
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    findSpecialDouble(array, n);

    return 0;
}
