#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int matrix[5][5];
    int row, col;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    int total = abs(row-2) + abs(col-2); 
    cout << total << endl;
    
}
