#include <iostream>
#include <vector>

using namespace std;

bool checkRobotArrangement(const vector<int>& reports) {
    int n = reports.size();
    vector<int> cumulativeSum(n + 1, 0);

    // Calculate the cumulative sum
    for (int i = 0; i < n; i++) {
        cumulativeSum[i + 1] = cumulativeSum[i] + reports[i];
    }

    // Check if the cumulative sum matches the expected positions
    for (int i = 0; i < n; i++) {
        int expectedSum = cumulativeSum[i] + (n - i - 1);
        if (expectedSum != reports[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> reports(n);
        for (int i = 0; i < n; i++) {
            cin >> reports[i];
        }

        if (checkRobotArrangement(reports)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
