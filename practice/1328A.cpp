/*              
                         "لا تفقد الأمل ولا تحزن." - القرآن 3: 139
                         “Do not lose hope, nor be sad.” -Quran 3:139

**********************  Author: Kaium Al Limon                    *******************
**********************  Facebook: www.facebook.com/codewithlimon  **********************
**********************  Github: www.github.com/codewithLimon      **********************
**********************  Codeforces Handle: TheShadowHunter        **********************
**********************  Submission Date: 11/27/2023                    **********************   


*/ 



#include<bits/stdc++.h>
using namespace std;

int minimumMoves(int dividand, int divisor){
    return (dividand + divisor - 1) / divisor * divisor - dividand;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin>>n;

    while(n--){
        int a,b;
        cin>>a>>b;

        cout<<minimumMoves(a,b)<<endl;
    }
}