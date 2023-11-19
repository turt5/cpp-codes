#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int i = 0;

    while (i < n)
    {
        int m;
        cin >> m;
        bool flag = true; // yes, assuming the drinks meet the conditions

        while (m--)
        {
            string a, b;
            cin >> a >> b;

            if (b == "wine")
            {
                if (!(a == "water" || a == "soda"))
                {
                    flag = false; // drink conditions not met, set flag to false
                }
            }
            else
            {
                flag = false; // invalid drink, set flag to false
            }
        }

        if (flag)
        {
            cout << "Case " << i + 1 << ": Yes" << endl;
        }
        else
        {
            cout << "Case " << i + 1 << ": No" << endl;
        }
        i++;
    }

    return 0;
}
