#include<bits/stdc++.h>
#include <cctype>
using namespace std;

int countUpper(string s){
    int len=s.size();

    int count=0;

    for(int i=0;i<len;i++){
        if(isupper(s[i])){
            count++;
        }
    }

    return count;
}

int countLower(string s){
    int len=s.size();

    int count=0;

    for(int i=0;i<len;i++){
        if(islower(s[i])){
            count++;
        }
    }

    return count;
}

string makeUpper(string s) {
    for (char& c : s) {
        c = toupper(c);
    }
    return s;
}

string makeLower(string s) {
    for (char& c : s) {
        c = tolower(c);
    }
    return s;
}

int main(){
    string s;
    cin>>s;

    int lower=countLower(s);
    int upper=countUpper(s);



    if(lower>=upper){
        cout<<makeLower(s);
    }else{
        cout<<makeUpper(s);
    }

}