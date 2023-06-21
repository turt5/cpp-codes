#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;

    int size = n;

    int sum = 0;

    while (n--)
    {
        int a;
        int b;

        cin >> a >> b;

        while (sum >= 0)
        {
            if (n == size)
            {
                sum += a;
            }
            else
            {
                sum += b;
                sum -= a;
            }
        }
    }
}
