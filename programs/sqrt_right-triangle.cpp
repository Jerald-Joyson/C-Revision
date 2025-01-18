#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    double c;
    cout<<"Hypotentus of the Right Angled Triangle \n"<<endl;
    cout<<"Enter the sides a and b of the Triangle : ";
    cin>>a>>b;
    c = sqrt(a*a+b*b);
    cout<<"The Hypotenous of the Right Angled Triangle with sides "<<a<<" and "<<b<<" is : "<<round(c)<<endl;

    return 0;
}