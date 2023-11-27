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

void run(){
    int n;
    cin>>n;
    vector<string>str(n);

    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    vector<char>chars;
    int a=0;

    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            chars.clear();

            chars.push_back(str[i][j]);
            chars.push_back(str[j][n-i-1]);
            chars.push_back(str[n-j-1][i]);
            chars.push_back(str[n-i-1][n-j-1]);

            sort(chars.begin(),chars.end());

            for(char cc: chars){
                a+=chars.back()-cc;
            }
        }
    }

    cout<<a<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin>>test;

    while(test--){
        run();
    }
}