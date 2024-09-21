// 1 2 3 4 5 6
//  7 8 9 0 9
//   0 9 0 9
//    0 9 0
//     9 0
//      9
//     0 9
//    0 9 0
//   9 0 9 0
//  9 0 9 8 7
// 6 5 4 3 2 1


#include <iostream>
using namespace std;
int main(){
    int n=6;

// 1-0.5
// 2-5/2 = 2.5
// 3-11/2 = 5.5
// 4-19/2 = 9.5
// 5-29/2 = 14.5
// 6-41/2 = 20.5
// 7-55/2 = 26.5
// 8-71
// 9-89
// 10-109


    for(int i = n;i>=1;i--){
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    for(int i = 2;i<=n;i++){
        for(int k=0;k<=n-i-1;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
}