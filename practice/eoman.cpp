#include <iostream>
#include <string>

using namespace std;

int convertRoman(string s) {
    int total = 0;

    for (int i = s.length() - 1; i >= 0; i--) {
        switch (s[i]) {
            case 'I':
                total += 1;
                break;
            case 'V':
                total += 5;
                break;
            case 'X':
                total += 10;
                break;
            case 'L':
                total += 50;
                break;
            case 'C':
                total += 100;
                break;
            case 'D':
                total += 500;
                break;
            case 'M':
                total += 1000;
                break;
            default:
                return -1;  // Invalid Roman numeral
        }
    }

    return total;
}

int main() {
    string s;

    cout << "Enter a Roman numeral: ";
    cin >> s;

    int convertedNumber = convertRoman(s);
    cout << "Converted Number: " << convertedNumber << endl;

    return 0;
}
