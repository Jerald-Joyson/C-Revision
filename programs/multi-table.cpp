#include<iostream>
using namespace std;
int main(){
int i=1,n;

cout<<"Enter the number: ";
cin>>n;

cout<<"Multiplication Table of "<<n<<endl;
while(i!=11){
	cout<<i<<" x "<<n<<" = "<<(i*n)<<endl;
	i++;
}


	return 0;
}
