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


int countDuplicates(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                ++count;
                break;
            }
        }
    }

    return count;
}


int main(){
    int n=4;
    int array[4];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int duplicates=countDuplicates(array,n);
    cout<<duplicates<<endl;
}