// fibonacci series using recursion

#include <bits/stdc++.h>
using namespace std;

// recursive function
int fibonacci_series(int n)
{
    int f = 1;
    int d = 1;
    int sum = 0;

    
        if(n<=1){
            return 1;
        }else{
            return fibonacci_series(n-1)+fibonacci_series(n-2);
        }
}

int main()
{
    int n;

    cin >> n;
    
    for(int i=0;i<n;i++){
        cout<<fibonacci_series(i)<<" ";
    }
}


/*

Manual tracing:

input : 5
output: 1 1 2 3 5 


since input n=5, so for every iteration:
i=0; i as n in recursive-function: n==0 || n==1 true , hence it returns 1 and prints on the console
i=1; i as n in recursive-function: n==0 || n==1 true , hence it returns 1 and prints on the console
i=2; i as n in recursive-function: n>(0 || 1) so it returns= (n-1)+(n-2) = 1+1 = 2 and prints on the console
i=3; i as n in recursive-function: n>(0 || 1) so it returns= (n-1)+(n-2) = 2+1 = 3 and prints on the console
i=4: i as n in recursive-functionb: n>(0 || 1) so it returns= (n-1)+(n-2) = 3+2= 5 and prints on the console


Hence the answer is 1 1 2 3 5



*/