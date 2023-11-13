#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Train{
    public:

    int start;
    int deperture;

    Train(){}
    Train(int s, int d){
        this->start=s;
        this->deperture=d;
    }
};

bool comparator(Train t1, Train t2){
    if(t1.deperture<t2.deperture) return true;
    else return false;
}

vector<int> activity(vector<Train>&trains, int n){
    sort(trains.begin(), trains.end(),comparator);
    int selected=0;
    vector<int> result;

    result.push_back(selected);
    for(int i=1;i<n;i++){

        int interval=trains[i].start-trains[selected].deperture;
        if(interval>=10){
            selected=i;
            result.push_back(i);
        }
    }

    return result;
}


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    vector<Train> trains;
    for(int i=0;i<n;i++){
        int s,d;
        cin>>s>>d;
        trains.push_back(Train(s,d));
    }

    vector<int> result=activity(trains,n);
    cout<<result.size()<<endl;
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
