#include <iostream>
using namespace std;

char checkWinner(string a1, string a2, string a3) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (a1[i] != '.' && a1[i] == a2[i] && a2[i] == a3[i])
            return a1[i];
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (a1[i] != '.' && a1[i] == a1[i+3] && a1[i+3] == a1[i+6])
            return a1[i];
    }

    // Check diagonals
    if (a1[0] != '.' && a1[0] == a2[1] && a2[1] == a3[2])
        return a1[0];

    if (a3[0] != '.' && a3[0] == a2[1] && a2[1] == a1[2])
        return a3[0];

    return '.';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a1, a2, a3;
        cin >> a1 >> a2 >> a3;

        char winner = checkWinner(a1, a2, a3);

        if (winner != '.')
            cout << winner << endl;
        else
            cout << "DRAW" << endl;
    }

    return 0;
}