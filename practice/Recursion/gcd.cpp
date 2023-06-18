// /Write a program in C to find the GCD of two numbers using recursion

#include <bits/stdc++.h>
using namespace std;

int findGCD(int num1, int num2)
{
    int r = num1 % num2;
    if (r == 0)
    {
        return num2;
    }
    int temp = num1;
    num1 = num2;
    num2 = temp;
    findGCD(num1, num2);
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << "GCD: " << findGCD(n1, n2) << endl;
    return 0;
}