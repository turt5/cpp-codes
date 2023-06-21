#include <iostream>
#include <string>
using namespace std;

bool isNearlyLucky(long long n) {
    int count = 0;
    string str = to_string(n);

    for (char digit : str) {
        if (digit == '4' || digit == '7') {
            count++;
        }
    }

    string luckyDigits = to_string(count);

    for (char digit : luckyDigits) {
        if (digit != '4' && digit != '7') {
            return false;
        }
    }

    return true;
}

int main() {
    long long n;
    cin >> n;

    if (isNearlyLucky(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
