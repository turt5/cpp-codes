/*              
                         "لا تفقد الأمل ولا تحزن." - القرآن 3: 139
                         “Do not lose hope, nor be sad.” -Quran 3:139

**********************  Author: Kaium Al Limon                    *******************
**********************  Facebook: www.facebook.com/codewithlimon  **********************
**********************  Github: www.github.com/codewithLimon      **********************
**********************  Codeforces Handle: TheShadowHunter        **********************
**********************  Submission Date: 25/6/2023                    **********************   


*/ 


#include<bits/stdc++.h>

using namespace std;

void start(){
    //start writing codes here:

    int n;

    cin>>n;

    int count=0;

    while(n--){
        int p,q;

        cin>>p>>q;

        if(p<q && (q-p)>=2){
            count++;
        }

    }


    cout<<count<<endl;

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

