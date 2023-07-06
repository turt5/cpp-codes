/*
                         "لا تفقد الأمل ولا تحزن." - القرآن 3: 139
                         “Do not lose hope, nor be sad.” -Quran 3:139

**********************  Author: Kaium Al Limon                    *******************
**********************  Facebook: www.facebook.com/codewithlimon  **********************
**********************  Github: www.github.com/codewithLimon      **********************
**********************  Codeforces Handle: TheShadowHunter        **********************
**********************  Submission Date: 05/07/2023                    **********************


*/

#include <bits/stdc++.h>

using namespace std;

void start()
{
    // start writing codes here:
    int n;
    cin >> n;
    if (n == 1)
        cout << "I hate it";
    else if (n > 1)
        cout << "I hate that";
    for (int i = 2; i < n; i++)
    {

        if (i % 2 == 1 && i != n)
            cout << " I hate that";

        else if (i % 2 == 0 && i != n)
            cout << " I love that";
    }
    if (n % 2 == 0 && n > 1)
        cout << " I love it";
    else if (n > 1)
        cout << " I hate it";
    cout << endl;
}

int main(int argc, char const *argv[])
{

    // int t;

    // cin>>t;

    // while(t--){
    start();
    // }
    // return 0;
}
