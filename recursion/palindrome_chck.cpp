#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int left, int right){
    if(left>=right){
        return true;
    } 

    if(s[left]!=s[right]){
        return false;
    }

    checkPalindrome(s,left+1,right-1);
}

int main(){
    string s;
    getline(cin,s);

    int left=0;
    int right=s.length()-1;

    if(checkPalindrome(s,left,right)==true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}