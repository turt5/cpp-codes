/*              
                         "لا تفقد الأمل ولا تحزن." - القرآن 3: 139
                         “Do not lose hope, nor be sad.” -Quran 3:139

**********************  Author: Kaium Al Limon                    *******************
**********************  Facebook: www.facebook.com/codewithlimon  **********************
**********************  Github: www.github.com/codewithLimon      **********************
**********************  Codeforces Handle: TheShadowHunter        **********************
**********************  Submission Date: 6/22/2023                **********************
**********************  Problem: Codeforces 1611B                 **********************  


*/ 


#include<bits/stdc++.h>

using namespace std;

void start(){
    int a,b;
    cin>>a>>b;

    if(b>a){
        swap(a,b);
    }

    int difference=abs(a-b);


    int Maxteams=min(difference/2,b)+(b-min(difference/2,b))/2;

    cout<<Maxteams<<endl;
}

int main(int argc, char const *argv[])
{
    
    int t;
    
    cin>>t;

    while(t--){
        start();
    }
    return 0;
}

