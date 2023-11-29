
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

