#include <iostream>
#include<bits/stdc++.h>
#include <string>
// #include<cmath>
// #include<algorithm>
// #include<iomanip>
// #include<queue>
// #include<bitset>
// #include<unordered_map>
// #include<unordered_set>

using namespace std;

int compareString(string s1, string s2)
{
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    return s1.compare(s2);
    
}

int main(int argc, char const *argv[])
{
    string s1, s2;

    cin >> s1 >> s2;

    cout << compareString(s1, s2);

    return 0;
}
