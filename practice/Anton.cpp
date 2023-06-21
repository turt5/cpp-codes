#include<iostream>
#include<string>

using namespace std;



void getData(const string& s,int n){

    int Anton=0;
    int Danik=0;


    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            Anton++;
        }else{
            Danik++;
        }
    }


    if(Anton==Danik){
        cout<<"Friendship"<<endl;
    }else if(Anton>Danik){
        cout<<"Anton"<<endl;
    }else cout<<"Danik"<<endl;
}


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    string s;

    cin>>s;


    getData(s,n);

    return 0;
}
