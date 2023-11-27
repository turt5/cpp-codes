/*
                         "لا تفقد الأمل ولا تحزن." - القرآن 3: 139
                         “Do not lose hope, nor be sad.” -Quran 3:139

**********************  Author: Kaium Al Limon                    *******************
**********************  Facebook: www.facebook.com/codewithlimon  **********************
**********************  Github: www.github.com/codewithLimon      **********************
**********************  Codeforces Handle: TheShadowHunter        **********************
**********************  Submission Date: 11/27/2023                    **********************


*/

#include <bits/stdc++.h>
using namespace std;

void run()
{
    multiset<int> set;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;

        set.insert(x);
    }

    for (int i = 0; i < 3 && *set.begin() != *set.rbegin(); i++)
    {
        set.insert(*set.begin());
        set.insert(*--set.end() - *set.begin());
        set.erase(--set.end());
    }

    if (*set.begin() == *set.rbegin())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin>>test;
    while(test--){
        run();
    }
    
}