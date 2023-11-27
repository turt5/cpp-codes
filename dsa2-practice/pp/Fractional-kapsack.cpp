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

bool compare(Product p1, Product p2){
    double result1=(double) p1.value/p1.weight;
    double result2=(double) p2.value/p2.weight;

    if(result1>result2){
        return true;
    }else return false;
}

double maxProfit(vector<Product>&products,int n, int capacity){
    sort(products.begin(),products.end(), compare);

    double profit=0.0;

    for(int i=0;i<n;i++){
        Product current=products[i];
        if(capacity>=current.weight){
            profit+=(double)current.value;
            capacity-=current.weight;
        }else{
            double ppw=(double)current.value/current.weight;
            profit+=(double)ppw*capacity;
            break;
        }
    }

    return profit;
}



int main(){
    int n;
    cin>>n;

    vector<Product> products;

    for(int i=0;i<n;i++){
        int w,v;
        cin>>w>>v;
        products.push_back(Product(w,v));
    }

    int capacity;
    cin>>capacity;

    cout<<"Maximum possible profit: "<<maxProfit(products,n,capacity)<<endl;

}

//product: 1   2   3   4
//weight : 2   5   10  3
//profit : 10  15  7   5
//p/w    : 5    3  0.7  1.67


// 10+15+5+0.7*5
// 2+5+3+5
//33.5