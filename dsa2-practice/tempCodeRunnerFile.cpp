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