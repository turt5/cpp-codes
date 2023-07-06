/*              
                         "لا تفقد الأمل ولا تحزن." - القرآن 3: 139
                         “Do not lose hope, nor be sad.” -Quran 3:139

**********************  Author: Kaium Al Limon                    *******************
**********************  Facebook: www.facebook.com/codewithlimon  **********************
**********************  Github: www.github.com/codewithLimon      **********************
**********************  Codeforces Handle: TheShadowHunter        **********************
**********************  Submission Date: 03/07/2023                   **********************   


*/ 


#include<bits/stdc++.h>

using namespace std;

void start(){
    //start writing codes here:

    string num1,num2;

    cin>>num1>>num2;

    string result="";
    for(int i=0;i<num1.length();i++){
        if(num1[i]!=num2[i]){
            result+='1';
        }else result+='0';
    }


    cout<<result<<endl;
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

