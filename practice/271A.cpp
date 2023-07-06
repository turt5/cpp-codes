/*              
                         "لا تفقد الأمل ولا تحزن." - القرآن 3: 139
                         “Do not lose hope, nor be sad.” -Quran 3:139

**********************  Author: Kaium Al Limon                    *******************
**********************  Facebook: www.facebook.com/codewithlimon  **********************
**********************  Github: www.github.com/codewithLimon      **********************
**********************  Codeforces Handle: TheShadowHunter        **********************
**********************  Submission Date: 23/06/2023                    **********************   


*/ 


#include<bits/stdc++.h>

using namespace std;

void start(){
    //start writing codes here:

    int y;
    cin>>y;

    while(y){
        y++;

        string str=to_string(y);

        string one,two,three,four;
        one=str[0];
        two=str[1];
        three=str[2];
        four=str[3];



        if(one!=two && one!=three && one!=four && two!=three && two!=four && three!=four){
            cout<<y<<endl;
            return;
        }
    }

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


