// {
//     public static void main (String[] args) throws Exception
//     {
//        Scanner in = new Scanner(System.in);
//        int x=in.nextInt();
//        if(x<5){
//            System.out.println(1);
//        }
//        else{
//            if(x%5==0){
//                System.out.println(x/5);
//            }
//            else{
//                System.out.println((x/5)+1);
//            }
//        }
 
//        in.close();
//     }
// }

#include<iostream>

using namespace std;

int main(){
    int x;

    cin>>x;

    if(x<5){
        cout<<1<<endl;
    }else{
        if(x%5==0){
            cout<<(x/5)<<endl;
        }else{
            cout<<(x/5)+1<<endl;
        }
    }
}