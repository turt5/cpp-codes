#include <bits/stdc++.h>
using namespace std;

class Object
{
public:
    int profit;
    int weight;
    double ppw;

    Object(int profit, int weight)
    {
        this->profit = profit;
        this->weight = weight;
        this->ppw = (double)profit / weight; // Calculate profit per unit weight
    }
};

bool comparator(Object a, Object b)
{
    return a.ppw > b.ppw; // Sort in descending order of profit per unit weight
}

double getMaxProfit(vector<Object> &objects, int n, int knapsackSize)
{
    sort(objects.begin(), objects.end(), comparator);
    double profit = 0.0;

    for (int i = 0; i < n && knapsackSize > 0; i++)
    {
        if (objects[i].weight <= knapsackSize)
        {
            profit += objects[i].profit;
            knapsackSize -= objects[i].weight;
        }
        else
        {
            double fraction = (double)knapsackSize / objects[i].weight;
            profit += fraction * objects[i].profit;
            break;
        }
    }

    return profit;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<Object> objects;

    for (int i = 0; i < n; i++)
    {
        int p, w;
        cin >> p >> w;
        objects.push_back(Object(p, w));
    }

    cout << "Max profit: " << getMaxProfit(objects, n, k) << endl;
    return 0;
}
