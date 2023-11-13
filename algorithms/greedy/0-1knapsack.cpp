#include <bits/stdc++.h>
using namespace std;

class Product {
public:
    int value;
    int weight;
    string productID;
};

bool compare(Product p1, Product p2) {
    double result1 = (double)p1.value / p1.weight;
    double result2 = (double)p2.value / p2.weight;

    if (result1 > result2) {
        return true;
    } else
        return false;
}

int knapsack_01(vector<Product>& products, int n, int capacity) {
    sort(products.begin(), products.end(), compare);
    int profit = 0;
    for (int i = 0; i < n; i++) {
        Product current = products[i];

        if (current.weight > capacity)
            continue;
        else {
            profit += current.value;
            capacity -= current.weight;
        }
    }

    return profit;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // ignore the newline character after n

    vector<Product> products(n);
    for (int i = 0; i < n; i++) {
        getline(cin, products[i].productID);
        cin >> products[i].weight >> products[i].value;
        cin.ignore(); // ignore the newline character after value
    }

    int capacity;
    cin >> capacity;

    int result = knapsack_01(products, n, capacity);
    cout << "Max possible profit: " << result << endl;
    return 0;
}
