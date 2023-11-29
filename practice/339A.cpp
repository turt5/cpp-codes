#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    string s;
    cin>>s;

    vector<int>v;

    stringstream ss(s);
    string item;

    while(getline(ss,item,'+')){
        v.push_back(stoi(item));
    }

    sort(v.begin(), v.end());

    string res="";
    // cout<<v;

    for(int i=0;i<v.size();i++){
        res+=to_string(v[i]);
        if(i!=v.size()-1){
            res+="+";
        }
    }


    cout<<res<<endl;
    

    return 0;
}
