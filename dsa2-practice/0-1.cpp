#include<bits/stdc++.h>
using namespace std;

class Product{
    public:

    int weight;
    int value;

    Product(){}
    Product(int weight, int value){
        this->weight=weight;
        this->value=value;
    }
};

bool compare(Product a, Product b){
    double res1=(double)a.value/a.weight;
    double res2=(double)b.value/b.weight;

    if(res1>res2) return true;
    else return false;
}

int maxProfitGreedy(vector<Product>&products, int n, int knapsack){
    sort(products.begin(), products.end(), compare);

    int profit=0;

    for(int i=0;i<n;i++){
        Product cp=products[i];
        if(knapsack-(cp.weight)>0){
            profit+=cp.value;
            knapsack-=cp.weight;
        }
    }

    return profit;
}

int gb=0;

int maxProfitBruteForce(vector<Product>&products, int index, int knapsack){

    gb++;

    
    if(knapsack==0 || index==products.size()){
        return 0;
    }

    

    Product current=products[index];

    if(current.weight>knapsack){
        int friend_=maxProfitBruteForce(products,index+1, knapsack);
        return friend_;
    }else{
        int friend1=current.value+maxProfitBruteForce(products,index+1, knapsack-current.weight);
        int friend2=maxProfitBruteForce(products,index+1,knapsack);
    

        if(friend1>friend2){
            return friend1;
        }else return friend2;
    }
}

#define NOT_SET -1
int cache[200][200];
int globalCount=0;


int maxProfitDP(vector<Product>&products, int i, int knapsack){
    if(cache[i][knapsack]!=NOT_SET){
        return cache[i][knapsack];
    }

    globalCount++;

    if(knapsack==0 || i==products.size()){
        return 0;
    }

    Product currentProduct=products[i];

    if(currentProduct.weight>knapsack){
        int friend_=maxProfitDP(products,i+1, knapsack);
        cache[i][knapsack]=friend_;
        return friend_;
    }else{
        int friend1=currentProduct.value+maxProfitDP(products,i+1, knapsack-currentProduct.weight);
        int friend2=maxProfitDP(products,i+1,knapsack);

        cache[i][knapsack]=max(friend1,friend2);

        return max(friend1,friend2);
    }

}


int main() {
    int n, knapsackSize;
    cin >> n >> knapsackSize;

    vector<Product> products;

    for (int i = 0; i < n; i++) {
        int w, v;
        cin >> w >> v;
        products.push_back(Product(w, v));
    }

    int* ptr = &cache[0][0];
    const size_t totalSize = sizeof(int) * 200 * 200;
    memset(ptr, -1, totalSize);


    cout<<"Bruteforce: "<<maxProfitBruteForce(products,0,knapsackSize)<<endl;
    cout<<"Called "<<gb<<" times"<<endl;

    cout << "DP: " << maxProfitDP(products, 0, knapsackSize) << endl;
    cout<<"Called "<<globalCount<<" times"<<endl;

    // for(int i=0;i<=200;i++){
    //     for(int j=0;j<=200;j++){
    //         cout<<cache[i][j]<<" ";
    //     }
    // }
    
    return 0;
}
