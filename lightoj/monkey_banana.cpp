#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        vector<vector<int> > dp(2 * N - 1, vector<int>(N, 0));

        // Input the upper half of the diamond
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j <= i; ++j) {
                cin >> dp[i][j];
            }
        }

        // Input the lower half of the diamond
        for (int i = N; i < 2 * N - 1; ++i) {
            for (int j = 0; j < 2 * N - 1 - i; ++j) {
                cin >> dp[i][j];
            }
        }

        // Dynamic programming to find the maximum number of bananas
        for (int i = 1; i < 2 * N - 1; ++i) {
            for (int j = 0; j < N; ++j) {
                if (j == 0) {
                    dp[i][j] += dp[i - 1][j];
                } else if (j == i) {
                    dp[i][j] += dp[i - 1][j - 1];
                } else {
                    dp[i][j] += max(dp[i - 1][j], dp[i - 1][j - 1]);
                }
            }
        }

        // Find the maximum number of bananas in the last row
        int maxBananas = 0;
        for (int j = 0; j < N; ++j) {
            maxBananas = max(maxBananas, dp[2 * N - 2][j]);
        }

        cout << "Case " << t << ": " << maxBananas << endl;
    }

    return 0;
}
