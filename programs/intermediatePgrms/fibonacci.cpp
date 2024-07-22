#include <iostream>

using namespace std;

int main(){

    int a=0, b=1,n,c;

    cout<<"Enter the limit: ";
    cin>>n;

    cout<<a<<","<<b<<",";
    for(int i=2;i<n;i++){
        c=a;
        a=b;
        b=c+a;
        cout<<b<<",";
    }
    cout<<endl;

    return 0;
}