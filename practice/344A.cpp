/*
                         "لا تفقد الأمل ولا تحزن." - القرآن 3: 139
                         “Do not lose hope, nor be sad.” -Quran 3:139

**********************  Author: Kaium Al Limon                    *******************
**********************  Facebook: www.facebook.com/codewithlimon  **********************
**********************  Github: www.github.com/codewithLimon      **********************
**********************  Codeforces Handle: TheShadowHunter        **********************
**********************  Submission Date: 25/6/2023                    **********************


*/

#include <bits/stdc++.h>

using namespace std;

void start()
{
    // start writing codes here:
    int n;

    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {

        cin >> array[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] != array[i + 1])
            count++;
    }
    cout << count << endl;
}

int main(int argc, char const *argv[])
{

    // int t;

    // cin>>t;

    // while(t--){
    start();
    // }
    return 0;
}
