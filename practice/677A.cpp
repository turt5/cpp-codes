/*              
                         "لا تفقد الأمل ولا تحزن." - القرآن 3: 139
                         “Do not lose hope, nor be sad.” -Quran 3:139

**********************  Author: Kaium Al Limon                    *******************
**********************  Facebook: www.facebook.com/codewithlimon  **********************
**********************  Github: www.github.com/codewithLimon      **********************
**********************  Codeforces Handle: TheShadowHunter        **********************
**********************  Submission Date: 6/22/2023                **********************   


*/ 


#include<bits/stdc++.h>

using namespace std;

void start(){
    int n,h;

    cin>>n>>h;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }


    int width=0;

    for(int i=0;i<n;i++){
        if(array[i]>h){
            width+=2;
        }else width+=1;
    }

    cout<<width<<endl;


}

int main(int argc, char const *argv[])
{
    start();
    return 0;
}

