#include<iostream>
#include<string>
#include <cctype>

using namespace std;

int main(){
    int n;

    cin>>n;

    int x=0;
    string statement;

    while(n--){
        cin>>statement;

        if(statement.compare("X++")==0){
            x++;
        }else if(statement.compare("++X")==0){
            ++x;
        }else if(statement.compare("X--")==0){
            x--;
        }else if(statement.compare("--X")==0){
            --x;
        }
    }

    cout<<x<<endl;
}