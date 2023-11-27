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
    int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int count=0;

        for(int i=0;i<=10;i++){
            if(x.find(s)!=string::npos){
                cout<<i<<endl;
                return;
            }
            x=x+x;
        }

        cout<<-1<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        run();
    }
}
