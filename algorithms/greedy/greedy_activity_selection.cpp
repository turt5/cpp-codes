#include <bits/stdc++.h>
using namespace std;

class Activity
{
public:
    int start;
    int finish;

    Activity(int start, int finish)
    {
        this->start = start;
        this->finish = finish;
    }
};

bool comparator(Activity a, Activity b)
{
    return a.finish < b.finish;
}

void printV(vector<Activity> act){
    int n = act.size();
    for (int i = 0; i < n;i++){
        if(i==n-1){
            cout << "{" << act[i].start << "," << act[i].finish << "}" << endl;
        }else{
            cout << "{" << act[i].start << "," << act[i].finish << "}, ";
        }
    }
}

vector<int> activitySelection(vector<Activity> &activities)
{
    sort(activities.begin(), activities.end(), comparator);
    printV(activities);
    cout << endl;
    int selected = 0;
    int size = activities.size();

    vector<int> result;
    result.push_back(selected);

    for (int i = 0; i < size; i++)
    {
        if (activities.at(i).start >= activities.at(selected).finish)
        {
            selected = i;
            result.push_back(i);
        }
    }

    return result;
}

void print(vector<int> vct){
    for (int i = 0; i < vct.size();i++){
        if(i==vct.size()-1){
            cout << vct.at(i) << endl;
        }else{
            cout << vct.at(i) << ", ";
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<Activity> activities;

    for (int i = 0; i < n; i++)
    {
        int s, e;
        cin >> s >> e;
        activities.push_back(Activity(s, e));
    }

    vector<int> result = activitySelection(activities);
    print(result);
}