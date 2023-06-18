#include<iostream>
// #include<bits/stdc++.h>
#include<string>
// #include<cmath>
// #include<algorithm>
// #include<iomanip>
// #include<queue>
// #include<bitset>
// #include<unordered_map>
// #include<unordered_set>

using namespace std;

string makeCapital(string s){
    char first=toupper(s[0]);
    s[0]=first;
    return s;
}

int main(int argc, char const *argv[])
{
    string s;

    cin>>s;

    cout<<makeCapital(s)<<endl;
    return 0;
}
