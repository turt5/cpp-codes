#include <bits/stdc++.h>
using namespace std;

class Product
{
public:
    int weight;
    int value;

    Product() {}
    Product(int w, int v)
    {
        this->weight = w;
        this->value = v;
    }
};

bool compare(Product p1, Product p2)
{
    double result1 = (double)p1.value / p1.weight;
    double result2 = (double)p2.value / p2.weight;

    if (result1 > result2)
        return true;
    else
        return false;
}

int maxProfitGreedy(vector<Product> &products, int n, int knapsack)
{
    sort(products.begin(), products.end(), compare);

    int profit = 0;

    for (int i = 0; i < n; i++)
    {

        Product currentProduct = products[i];

        if (currentProduct.weight > knapsack)
        {
            continue;
        }
        else
        {
            profit += currentProduct.value;
            knapsack -= currentProduct.weight;
        }
    }

    return profit;
}

int recursiveCalls=0;

int maxProfitBruteForce(vector<Product> &products, int index, int knapsack)
{
    if (knapsack == 0 || index == products.size())
    {
        return 0;
    }

    recursiveCalls++;

    Product currentProduct = products[index];

    if (currentProduct.weight > knapsack)
    {
        int friend_ = maxProfitBruteForce(products, index + 1, knapsack);
        return friend_;
    }
    else
    {

        int friend1 = currentProduct.value+maxProfitBruteForce(products, index + 1, knapsack - currentProduct.weight);

        int friend2 = maxProfitBruteForce(products, index + 1, knapsack);

        if (friend1 > friend2)
        {
            return friend1;
        }
        else
        {
            return friend2;
        }
    }
}

int main()
{
    int n, knapsackSize;
    cin >> n >> knapsackSize;

    vector<Product> products;
    for (int i = 0; i < n; i++)
    {
        int w, v;
        cin >> w >> v;
        products.push_back(Product(w, v));
    }

    cout << "Greedy Max profit: " << maxProfitGreedy(products, n, knapsackSize) << endl;
    cout << "BruteForce Max profit: " << maxProfitBruteForce(products, 0, knapsackSize);
    cout<<recursiveCalls<<endl;
}