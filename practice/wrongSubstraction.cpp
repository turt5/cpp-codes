#include <bits/stdc++.h>
using namespace std;

int getResult(int num, int k)
{

    for (int i = 0; i < k; i++)
    {
        int lastDigit = num % 10;

        if (lastDigit == 0)
        {
          num/=10;
        }
        else
        {
            num--;
        }
    }

    return num;
}

int main()
{
    int num, k;
    cin >> num >> k;

    int res = getResult(num, k);

    cout << res;
}