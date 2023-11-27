#include<bits/stdc++.h>
using namespace std;

class Pair{
    public:
    int x;
    int y;

    Pair(){

    }

    Pair(int x, int y){
        this->x=x;
        this->y=y;
    }
};

bool compareX(Pair a, Pair b){
    return a.x<b.x;
}

bool compareY(Pair a, Pair b){
    return a.y<b.y;
}

double distance(Pair a, Pair b){
    return sqrt(((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y)));
}

double bruteForce(vector<Pair>& points, int start, int end) {
    double minDist = numeric_limits<double>::infinity();
    for (int i = start; i < end; ++i) {
        for (int j = i + 1; j < end; ++j) {
            minDist = min(minDist, distance(points[i], points[j]));
        }
    }
    return minDist;
}

double stripClosest(vector<Pair>& strip, double d) {
    double minDist = d;

    // Sort strip by y-coordinate
    sort(strip.begin(), strip.end(), compareY);

    // Check each pair of points in the strip
    for (size_t i = 0; i < strip.size(); ++i) {
        for (size_t j = i + 1; j < strip.size() && (strip[j].y - strip[i].y) < minDist; ++j) {
            minDist = min(minDist, distance(strip[i], strip[j]));
        }
    }

    return minDist;
}

double closestPairUtil(vector<Pair>&pairs, int left, int right){
    if(left==right){
        //single element
        return -1;
    }else if(left+1==right || left+2==right){
        //2 or 3 element
        //bruteforce
        return bruteForce(pairs,left,right);

    }else{
        int mid=(left+right)/2;

        double friendLeft=closestPairUtil(pairs,left,mid);
        double friendRight=closestPairUtil(pairs,mid+1,right);

        double minDist = min(friendLeft, friendRight);

    // Find points in the strip that are closer than minDist
    vector<Pair> strip;
    for (int i = left; i < right; ++i) {
        if (abs(pairs[i].x - pairs[mid].x) < minDist) {
            strip.push_back(pairs[i]);
        }
    }

    // Check the strip for closer pairs
    return min(minDist, stripClosest(strip, minDist));

    }
}


double closestPair(vector<Pair>&pairs){
    sort(pairs.begin(),pairs.end(),compareX);

    return closestPairUtil(pairs,0,pairs.size()-1);
}

int main(){
    int n;
    cin>>n;

    vector<Pair>pairs;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        pairs.push_back(Pair(x,y));
    }

    double closestPairValue=closestPair(pairs);
    cout<<"The smallest distance: "<<closestPairValue<<endl;
}