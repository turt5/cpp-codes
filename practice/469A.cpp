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

void print(int map[], int n){
    for(int i=0;i<n;i++){
        cout<<map[i]<<" ";
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int x;
    cin>>x;

    int array[x];

    for(int i=0;i<x;i++){
        cin>>array[i];
    }

    int y;
    cin>>y;

    int array2[y];

    for(int i=0;i<y;i++){
        cin>>array2[i];
    }

    int m=n+1;
    int map[m];
    memset(map,0,sizeof(map));

    for(int i=0;i<x;i++){
        map[array[i]]++;
    }

    for(int i=0;i<y;i++){
        map[array2[i]]++;
    }


    // print()

    bool flag=true;

    for(int i=1; i<=n; i++){
        if(map[i] == 0){
            flag = false;
            // break;
        }
    }

    if(flag==true){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }

}