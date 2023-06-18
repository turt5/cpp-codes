#include <iostream>
// #include<bits/stdc++.h>
#include <string>
// #include<cmath>
// #include<algorithm>
// #include<iomanip>
// #include<queue>
// #include<bitset>
#include <unordered_map>
// #include<unordered_set>
using namespace std;

void countFirstFrequency(string str)
{
    unordered_map<char, int> frequencyMap;

    for (char c : str)
    {

        if (frequencyMap.find(c) == frequencyMap.end())
        {
            frequencyMap[c] = 1;
        }
    }

    if (frequencyMap.size() % 2 != 0)
    {
        cout <<  "IGNORE HIM!"<< endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
}

int main()
{
    string str;

    cin >> str;
    countFirstFrequency(str);
    return 0;
}
